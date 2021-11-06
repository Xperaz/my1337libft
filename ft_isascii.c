#include <stdio.h>
#include <ctype.h>

int  ft_isascii(int c){
    if (!(c >= 0 && c <= 127))
        return (0);
    else
        return (1);
}

int main()
{
    int ch;
 
   for (ch = 125; ch <= 130; ch++) {
      printf("%d    ", ch);
      if (ft_isascii(ch))
         printf("The character is %c\n", ch);
      else
         printf("Cannot be represented by an ASCII character\n");
   }
   return 0;
}