#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *str, int c){
   unsigned    char ch;
   char *arr;

   arr = (char *)str;
   ch = (unsigned char)c; 
   while (*arr){
      if (*arr == ch){
         return arr;
      }
      arr++;
   }
   return NULL;
}

int main () {
   const char str[] = "http://www.1337.com";
   const char ch = '.';
   char *ret;

   ret = ft_strchr(str, ch);

   printf("%s\n", ret);
   
   return(0);
}