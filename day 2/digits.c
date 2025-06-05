#include <stdio.h>
int main() 
{
    char s[100];
    printf("ENTER THE STRING:");
    fgets(s,100,stdin);
    char *p=s;
    int num = 0,count;
    while (*p) 
    {
        if (*p >= '0' && *p <= '9') 
        {
            num = num * 10 + (*p - '0');
            count++;
        }
        p++;
    }
    printf("%d\n", count);  
    return 0;
}
