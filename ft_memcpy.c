#include <stdio.h>
#include <string.h>
void *ft_memcpy(void *dest, const void * src, size_t n){
    char *dest1;
    dest1 = dest;
    const char *src1;
    src1 = src;
    unsigned int i;
    
    i = 0;
    while (i < n){
        dest1[i] = src1[i];
        i++;
    }
    return dest;
}

int main () {
   const char src[50] = "http://www.1337.com";
   char dest[50];
   const char src1[50] = "http://www.1337.com";
   char dest1[50];
   
   memcpy(dest1, src1, sizeof(src1));
   printf("%s\n", dest1);
  
   ft_memcpy(dest, src, sizeof(src));
   printf("%s\n", dest);
   
   return(0);
}