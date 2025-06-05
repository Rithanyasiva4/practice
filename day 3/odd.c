#include <stdio.h>
int main() 
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int odd = 0, even = 0;
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] % 2 == 0) 
        {
            even++;
        } 
        else 
        {
            odd++;
        }
    }
    printf("Odd = %d\nEven = %d\n", odd, even);
    return 0;
}
