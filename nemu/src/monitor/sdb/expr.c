/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
#include <math.h>

enum {
  TK_NOTYPE = 256, TK_EQ, NUM, UNEQ, LEQ, OR, AND, REG=299, HEX

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"==", TK_EQ},        // equal
	{"\\-", '-'},         // sub
	{"\\(", '('},					// lift parenthesis
	{"\\)", ')'},					// right parenthesis
	{"\\*", '*'},					// multiply
	{"\\/", '/'},					// divisioin
	{"!=", UNEQ},					// uneq
	{"<=", LEQ},			//less or equal
	{"\\|\\|", OR},				// or
	{"\\&\\&", AND},			// and
	{"\\!", '!'},					// !
	{"\\$[a-zA-Z]*[0-9]*", REG},		//reg_name
	{"\\0[xX][0-9a-fA-F]+", HEX},		//hexadecimal-number
	{"[0-9]*", NUM},
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}
/***附加函数***/
void int2char(int x, char str[]) {
    // 初始化一个临时索引变量
    int tmp_index = 0;
    // 用于计算整数位数的临时变量
    int tmp_x = x;
    // 用于存储整数位数的变量
    int x_size = 0;
    // 用于计算数字的位数
    int flag = 1;
    // 计算整数的位数
    while(tmp_x) {
        tmp_x /= 10;
        x_size++;
        flag *= 10;
    }
    // 如果x为0，直接在字符串首位添加'0'
    if (x_size == 0) {
        str[tmp_index++] = '0';
    }
    // 调整flag的值，使其指向最高位的数字
    flag = x_size > 0 ? pow(10, x_size - 1) : 1;
    // 将整数转换为字符串
    while(strchr(str, '\0') == NULL) {
        // 取出当前最高位的数字
        int a = x / flag; 
        // 移除当前最高位的数字
        x %= flag;
        // 调整flag的值，使其指向下一位的数字
        flag /= 10;
        // 将数字转换为字符，并存储到字符串中
        str[tmp_index++] = a + '0';
    }
    // 确保字符串以'\0'结尾
    str[tmp_index] = '\0';
}
int char2int(char s[]){
  int s_size = strlen(s);
  int res = 0 ;
  for(int i = 0 ; i < s_size ; i ++) {
		res = res * 10 + (s[i] - '0');
  }
  return res;
}
/******/
typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[65536] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type) {
					case TK_NOTYPE:
						break;
/***可能不需要
					case UNEQ:
					case TK_EQ:
					case OR:
					case AND:
					case REG:
					case HEX:
						Assert(nr_token < 32, "The tokens array has insufficient storage     space.");
            Assert(substr_len < 32, "The token is too long");
            tokens[nr_token].type = rules[i].token_type;
            strncpy(tokens[nr_token].str, substr_start, substr_len);
            tokens[nr_token].str[substr_len] = '\0';
            nr_token++;
            break;
***/
          default:
						Assert(nr_token < 65536, "The tokens array has insufficient storage space.");
						Assert(substr_len < 32, "The token is too long");
						tokens[nr_token].type = rules[i].token_type;
						strncpy(tokens[nr_token].str, substr_start, substr_len);
						tokens[nr_token].str[substr_len] = '\0';
						nr_token++;
						break;
        }

        break;
      }
    }

//	printf("%d\n", nr_token);
    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

											/***test tokens***
	for(int j = 0; j < nr_token; j++) {
		printf("%d:%s ", tokens[j].type, tokens[j].str);
	}
	printf("\n");
										  ******/

  return true;
}

bool check_parentheses(int p, int q);
int max(int a, int b);
uint32_t eval(int p, int  q);

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
	*success = true;
	/***reg***/
	for(int i = 0; i < nr_token; i++) {
		if(tokens[i].type == REG) {
			for(int j = 0; j < 32; j++) {
				tokens[i].str[j] = tokens[i].str[j+1];
			}
			bool flag = true;
			uint32_t tmp = isa_reg_str2val(tokens[i].str, &flag);
			printf("i=%d,reg=%u\n", i, tmp);
			if(flag) {
				tokens[i].str[0] = (char)tmp;
				printf("Success,str=%s\n", tokens[i].str);
			}
			else {
				printf("Transfrom error.\n");
				assert(0);
			}
		}
	}
	/***hex***/
	for(int i = 0; i < nr_token; i++) {
		if(tokens[i].type == HEX) {
			int value = strtol(tokens[i].str, NULL, 16);		//将字符串转换为长整数
			int2char(value, tokens[i].str);
		}
	}
	/***处理负号***/
	for(int i = 0; i < nr_token; i++) {
		if(tokens[i].type == '-' && (i == 0 || (tokens[i-1].type != NUM && tokens[i+1].type == NUM ) || tokens[i-1].type != ')' )) {
			tokens[i].type = TK_NOTYPE;
			for(int j = 31; j >= 0; j--) {
				tokens[i+1].str[j] = tokens[i+1].str[j-1];
			}
			tokens[i+1].str[0] = '-';
			for(int j = 0; j < nr_token; j++) {
				if(tokens[j].type == TK_NOTYPE) {
					for(int k = j+1; k < nr_token; k++) {
						tokens[k-1] = tokens[k];
					}
					nr_token--;
				}
			}
		}
	}
	/***处理取反***/
	for(int i = 0; i < nr_token; i++) {
		if(tokens[i].type == '!') {
			tokens[i].type = TK_NOTYPE;
			int tmp = char2int(tokens[i+1].str);
			if(tmp == 0) {
				memset(tokens[i+1].str, 0, sizeof(tokens[i+1].str));
				tokens[i+1].str[0] = '1';
			}
			else {
				memset(tokens[i+1].str, 0, sizeof(tokens[i+1].str));
			}
			for(int j = 0; j < nr_token; j++) {
				if(tokens[j].type == TK_NOTYPE) {
					for(int k = j + 1; k < nr_token; k++) {
						tokens[k - 1] = tokens[k];
					}
					nr_token--;
				}
			}
		}
	}
	/***处理指针***/
	for (int i = 0; i < nr_token; i ++) {
		if (tokens[i].type == '*' && (i == 0 || tokens[i-1].type != NUM || tokens[i-1].type != HEX || tokens[i-1].type != (int)(')'))) {
			tokens[i].type = TK_NOTYPE;
			int tmp = char2int(tokens[i+1].str);
			uintptr_t a = (uintptr_t)tmp;
			int value = *((int*)a);
			int2char(value, tokens[i+1].str);
			for(int j = 0 ; j < nr_token ; j ++) {
				if(tokens[j].type == TK_NOTYPE) {
					for(int k = j +1 ; k < nr_token; k ++) {
					tokens[k - 1] = tokens[k];
					}
					nr_token -- ;
				}
			}
	}
}
	uint32_t result = 0;
	result = eval(0, nr_token - 1);
	printf("result = %u\n", result);
	return 0;
}

uint32_t eval(int p, int  q) {
	printf("p=%d,q=%d\n", p, q);
  if (p > q) {
    /* Bad expression */
		assert(0);
		return -1;
  }
  else if (p == q) {
    /* Single token.
     * For now this token should be a number.
     * Return the value of the number.
     */

		return atoi(tokens[p].str);
  }
  else if (check_parentheses(p, q) == true) {
    /* The expression is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
    return eval(p + 1, q - 1);
  }
  else {
    int op = -1;//the position of 主运算符 in the token expression;
		bool flag = false;
		for(int i = p; i < q; i++) {
			if(tokens[i].type == '(') {
//				int j = i;
				while(tokens[i].type != ')') {//s循环
					i++;
//				if(j == q) {
//					printf("ERROR')'")
				}
			}
			if(!flag && tokens[i].type == OR) {
				flag = true;
				op = max(op,i);
			}
			if(!flag && tokens[i].type == AND) {
				flag = true;
				op = max(op,i);
			}
			if(!flag && tokens[i].type == UNEQ) {
				flag = true;
				op = max(op,i);
			}
			if(!flag && tokens[i].type == TK_EQ) {
				flag = true;
				op = max(op,i);
			}
			if(!flag && tokens[i].type == LEQ) {
				flag = true;
				op = max(op,i);
			}
			if(!flag && (tokens[i].type == '+' || tokens[i].type == '-')) {
				flag = true;
				op = max(op, i);
			}
			if(!flag && (tokens[i].type == '*' || tokens[i].type == '/')) {
				op = max(op, i);
			}
//			printf("%d %d %d\n",i,flag,op);
		}

    uint32_t val1 = eval(p, op - 1);
    uint32_t val2 = eval(op + 1, q);
		int op_type = tokens[op].type;
    switch (op_type) {
      case '+': return val1 + val2;
      case '-': return val1 - val2;
      case '*': return val1 * val2;
      case '/': 
				if(val2 == 0) {
					Assert(0, "The denominator is zero");
				}
				else {
					return val1 / val2;
				}
			case TK_EQ: return val1 == val2;
			case UNEQ: return val1 != val2;
			case LEQ: return val1 <= val2;
			case OR: return val1 || val2;
			case AND: return val1 && val2;
      default: printf("No op type.\n"); assert(0);
    }
  }
}

bool check_parentheses(int p, int q) {
	if(tokens[p].type != '(' || tokens[q].type != ')')
		return false;
	int l = p, r = q;
	while(l < r) {
		if(tokens[l].type == '(') {
			if(tokens[r].type == ')') {
				l ++, r --;
				continue;
			}
			else
				r --;
		}
		else if(tokens[l].type == ')')
			return false;
		else l ++;
	}
	return true;
}
//algorithm max
int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
