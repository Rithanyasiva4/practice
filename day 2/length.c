#include <stdio.h>
int main() 
{
    char s[100];
    printf("ENTER THE STRING:");
    fgets(s,100,stdin);
    int length = 0;
    char *p=s;
    while (*p) 
    {
        if (*p == '\n') 
        {
            *p = '\0'; 
             break;
        }
        length++;
        p++;
    }
    printf("%d\n",length);  
    return 0;
}
