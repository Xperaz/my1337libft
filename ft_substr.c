#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len) {
    unsigned int i;
    unsigned int j;
    char *res;
    
    res = (char *) malloc(len * sizeof(char));
    if(!res)
        return  NULL;
    i = start;
    j = 0;
    while (len > 0){
        res[j++] = s[i++];
        len--;
    }
    res[j] = 0;
    return res;
    free(res);
}

int main()
{
    const char s[] = "hello 1337 world!";   
    unsigned int start = 6;
    size_t len = 4;
    char *res;
    res = ft_substr(s, start, len);
    printf("%s", res);
    return 0;
}