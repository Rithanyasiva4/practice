#include <stdio.h>
#include <ctype.h>
int main() 
{
    char s[50];
    printf("ENTER A STRING:");
    fgets(s,50,stdin);  
    char *p=s; 
    int count = 0;
    while (*p)
    {
        if (isupper(*p)) 
        {
            count++;
        }
        p++;
    }
    printf("%d\n",count);  
    return 0;
}
