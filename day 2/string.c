#include <stdio.h>
#include <ctype.h>
int main() 
{
    char s[100];
    printf("ENTER A STRING:");
    fgets(s,50,stdin);
    char *p=s;
    char *start = p;
    char *end = p;
    while (*end) 
    {
        end++;
    }
    end--;
    while (start < end) 
    {
        if (!isalnum(*start)) 
        {
            start++;
        }
        else if (!isalnum(*end)) 
        {
            end--;
        }
        else 
        {
            char temp = *start;
            *start = *end;
            *end = temp;
            start++;
            end--;
        }
    }
    printf("%s\n", p);
    return 0;
}
