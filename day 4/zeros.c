#include <stdio.h>
int main() 
{
    int size;
    printf("ENTER A SIZE: ");
    scanf("%d", &size);
    int arr[size];
    printf("ENTER THE ELEMENTS OF ARRAY: ");
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int zeros = 0, ones = 0;
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] == 0) 
        {
            zeros++;
        } 
        else if (arr[i] == 1) 
        {
            ones++;
        }
    }
    printf("Number of zeros: %d\n", zeros);
    printf("Number of ones: %d\n", ones);
    return 0;
}
