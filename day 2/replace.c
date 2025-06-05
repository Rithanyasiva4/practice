#include <stdio.h>
int main() 
{
    char s[50];
    printf("ENTER A STRING:");
    fgets(s,50,stdin);
    char vowels[] = "aeiouAEIOU";
    for (int i = 0; s[i]; i++) 
    {
        for (int j = 0; vowels[j]; j++) 
        {
            if (s[i] == vowels[j]) 
            {
                s[i] = ' ';
                break;
            }
        }
    }
    printf("%s\n", s);
    return 0;
}
