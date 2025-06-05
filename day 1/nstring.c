#include <stdio.h>
#include <string.h>
int main() 
{
    char s[100];
    printf("ENTER A STRING:");
    fgets(s,100,stdin);
    int n;
    printf("ENTER THE SIZE TO ROTATE:");
    scanf("%d",&n);
    int len = strlen(s);
    n = n % len;
    char temp[n];
    strncpy(temp, s, n);
    memmove(s, s + n, len - n);
    memcpy(s + len - n, temp, n);
    printf("%s\n", s);
    return 0;
}
