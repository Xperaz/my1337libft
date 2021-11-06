#include <stdio.h>
#include <string.h>

void *ft_memset (void *s, int c, size_t n){
  long long unsigned int i;
  char *res;
  res = s;

  i = 0;
  while (i < n){
      res[i] = c;
      i++;
  }
 return s;
}

int main()
{
 char str[100] = "hello";
 char str1[100] = "hello";
 char *res = memset(str, '*', 9);
  printf("%s\n", res);
  char *res1 = ft_memset(str1, '*', 9);
  printf("%s", res1);
   return 0;
}

