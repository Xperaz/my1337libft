#include <stdio.h>
#include <string.h>
void *ft_memccpy(void *restrict dest, const void *restrict src, int c, size_t n){
    char *dest1;
    dest1 = dest;
    const char *src1;
    src1 = src;
    long long unsigned int i;
    
    i = 0;
    while (i < n){
        if (src1[i] == c){
            dest1[i] = c;
            break;
        }
        else {
            dest1[i] = src1[i];
        }
        i++;
    }
    return dest;
}

int main () {
   char* msg = "This is the string: not copied";
   char* msg1 = "This is the string: not copied";
   char buffer[80];
   char buffer1[80] = "";
   memccpy( buffer, msg, ':', 80);
   printf( "%s\n", buffer );
   ft_memccpy(buffer1, msg1, ':', 80);
   printf( "%s", buffer1);
   
   return(0);
}