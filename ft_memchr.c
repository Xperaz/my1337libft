#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *str, int c, size_t n){
   size_t   i;
   unsigned char ch;
   unsigned char *res;
   res = (unsigned char *)str;
   ch = (unsigned char)c;

   i = 0;
   while(i < n){
      if(*res == ch){
         return res;
      }
      i++;
      res++;
   }
   return NULL;
}

int main () {
   const char str[] = "http:www.1337.ma";
   const char ch = ':';
  char *ret;

   ret = ft_memchr(str, ch, 5);

   printf("%s", ret);

   return(0);
}