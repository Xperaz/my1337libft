#include <stdio.h>
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

void* ft_calloc( size_t num, size_t size ){
    size_t *call;
    size_t memory;

    memory = num * size;
    call = (void *) malloc(memory);
    if (!call)
        return NULL;
    ft_bzero(call, memory);
    free(call);
    return call;
}

int main()
{
    if (ft_calloc(5, 5))
        printf("success");
    return 0;
}