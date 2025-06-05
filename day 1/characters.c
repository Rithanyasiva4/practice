#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() 
{
    char s[100];
    printf("ENTER A STRING: ");
    fgets(s,100,stdin);
    char *p=s;
    int count=0;
    while (*p) 
    {
        if (*p == '\n') 
        {
            *p= '\0'; 
             break;
        }
        if (!isalnum(*p)) 
        {
            count++;
        }
        p++;
    }
    printf("%d\n", count);
    return 0;
}
