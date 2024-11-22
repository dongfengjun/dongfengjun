#include <stdio.h>
#include <string.h>
/***test founction***/
int klibmemcmp(const void *s1, const void *s2, size_t n) {
  int i = 0;
  char *c1 = (char *)s1;
  char *c2 = (char *)s2;
  while((i < (n-1)) && (c1[i] == c2[i])) {
    i ++;
  }
  if(c1[i] < c2[i])
    return -1;
  else if(c1[i] > c2[i])
    return 1;
  else
    return 0;
}

/***test main***/
int main ()
{
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "abcdef", 6);
   memcpy(str2, "abcdef", 6);

   ret = memcmp(str1, str2, 5);

   if(ret > 0)
   {
      printf("str2 小于 str1");
   }
   else if(ret < 0)
   {
      printf("str1 小于 str2");
   }
   else
   {
      printf("str1 等于 str2");
   }
   
   return(0);
}
