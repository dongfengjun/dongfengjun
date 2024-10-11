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

#include <common.h>

void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();
word_t expr(char *e, bool *success);

int main(int argc, char *argv[]) {
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif

FILE *file;
char line[65536 + 128];
char exprbuf[65536];
uint32_t result;

file = fopen("/home/xi/ysyx-workbench/nemu/tools/gen-expr/build/input", "r");	//打开文件
assert(file != NULL);	//assert0
while (fgets(line, 65536 + 128, file) != NULL)	//fgets读取file文件x-1位字符串到line
{
  /*notice i and j need reset before start*/
  int i = 0;
  int j = 0;
  int cnt = sscanf(line, "%u", &result);	//sscanf字符串格式为化"%u"无符号整型数据,sscanf成功返回1
  assert(cnt == 1);
  while (line[i] != ' ')
  {
    i++;
  }
	printf("%d ", i);
  while (line[i] != '\n' && i < 65536)
  {
    exprbuf[j] = line[i];
    j++;
    i++;
  }
	printf("%d %d\n", i, j);
  exprbuf[j] = '\0';		//将line读入
  bool success = true;
  word_t ans = expr(exprbuf, &success);
  if (success == false && result - ans != 0)
  {
    printf("- origin line: %s- success: %d\n- exprbuf: %s\n- result:%u\n- ans: %u\n",
           line, success, exprbuf, result, ans);
    return 0;
  }
}
return 0;

  /* Start engine. */
	engine_start();

  return is_exit_status_bad();
}
