#include <stdio.h>
#include <string.h>

void *ft_memmove(void *str1, const void *str2, size_t n){
    char *dest;
    const  char *src;
    long long unsigned int i;
    
    dest = str1;
    src = str2;

    i = 0;
    if (src <= dest){
        while (n--)
            dest[n] = src[n];
    }
    else {
        while ( i <= n){
        dest[i] = src[i];
        i++;
        }
    }
    return dest;
}

int main () {
   char dest[] = "newstring";
   const char src[]  = "newstring";

   memmove(dest, src, 2);
   printf("dest = %s  src = %s\n", dest, src);
   
   char dest1[] = "oldstring";
   const char src1[]  = "newstring";
   
   ft_memmove(dest1, src1, 2);
   printf("dest = %s  src = %s" , dest1, src1);

   return(0);
}