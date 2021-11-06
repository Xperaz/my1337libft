#include <stdio.h>
#include <stdlib.h>

int     ft_strlen(char const *str){
    int     i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}


char *ft_strjoin(char const *s1, char const *s2){
    unsigned int i;
    unsigned int j;
    unsigned int k;
    unsigned int len;
    char        *res;
    
    len = ft_strlen(s1) + ft_strlen(s2);
    res = (char *) malloc(len * sizeof(char));
    if(!res)
        return  NULL;
    i = 0;
    k = 0;
    while (s1[i] != '\0'){
        res[k++] = s1[i++];
    }
    j = 0;
    while (s2[j] != '\0'){
        res[k++] = s2[j++];
    }
    res[k] = '\0';
    return res;
}

int main()
{
    char const s1[] = "hello ";   
    char const s2[] = "1337"; 
    char *res;
    res = ft_strjoin(s1, s2);
    printf("%s", res);
    return 0;
}