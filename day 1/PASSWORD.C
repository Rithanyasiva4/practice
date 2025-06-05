#include <stdio.h>
int main()
{
    char s[100];
    printf("ENTER A STRING:");
    fgets(s,100,stdin);
    char *p=s;
    while (*p)
    {
        if (*p == '\n') 
        {
            *p = '\0'; 
             break;
        }
        printf("*");
        p++;
    }
    printf("\n"); 
    return 0;
}