#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *str1, const void *str2, size_t n){
   unsigned char *arr1;
   unsigned char *arr2;
   size_t i;

   arr1 = (unsigned char *)str1;
   arr2 = (unsigned char *)str2;
   i = 0;
   while (i < n)
   {
      if (*arr1 > *arr2)
         return 1;
      else if (*arr1 < *arr2)
         return -1;
      i++;
      arr1++;
      arr2++;
   }
   return 0;
}

int main () {
   char str1[15] = "abcz";
   char str2[15] = "bccd";
   int ret;
   int ret1;

   ret = ft_memcmp(str1, str2, 10);
   ret1 = memcmp(str1, str2, 10);
   printf("res= %d\n", ret);
   printf("res= %d", ret1);
   
   return(0);
}