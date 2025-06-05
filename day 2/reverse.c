#include <stdio.h>
#include <string.h>
int main() 
{
    char s[50];
    printf("ENTER A STRING:");
    fgets(s,50,stdin);
    char *p=s;
    int len = strlen(p);
    char *start=p;
    char *end = p+ len - 1;
    char temp;
    if (*end == '\n') 
    {
        *end = '\0';
        end--;
        len--;
    }
    while (p< end) 
    {
        temp = *p;
        *p = *end;
        *end = temp;
        p++;
        end--;
    }
    printf("%s\n",start); 
    return 0;
}
