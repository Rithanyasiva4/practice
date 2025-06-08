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
    int sum = 0;
    for (int i = size - 1; i >= 0; i--) 
    {
        int temp = arr[i];
        arr[i] = sum;
        sum += temp;
    }
    printf("Modified array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
