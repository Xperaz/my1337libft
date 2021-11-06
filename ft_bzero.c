#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ft_bzero(void *s, size_t n){
  long long unsigned int i;
  char *res;
  res = s;
  
  i = 0;
  while (i < n){
      res[i] = 0;
      i++;
  }
}

int main()
{
 //char str[100] = "hello";
 char str1[100] = "hello";
 //char *res = bzero(str, 3);
 // printf("%s\n", res);
 ft_bzero(str1, 9);
 return EXIT_SUCCESS;
}

