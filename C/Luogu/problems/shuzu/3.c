#include "stdio.h"
#include "string.h"
char *fun(char *s)
{ 
  return s;
} 


int main()
{ 
    char *s;
    printf("%p\n",s);
    fun(s);
    printf("%p\n",s);
    return 0;
 }
