#include <stdio.h>
#include <string.h>
int main()
{
    char s[100],c;
    printf("ENTER A STRING:");
    fgets(s,100,stdin);
    printf("ENTER A WORD:");
    scanf("%c",&c);
    if (strchr(s, c)) 
    {
        printf("Present\n");
    }
    else 
    {
        printf("Not Present\n");
    }
    return 0;
}
