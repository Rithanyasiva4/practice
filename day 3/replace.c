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
    int sum = 0;
    for (int i = 0; i < size; i++) 
    {
        int temp = arr[i];
        arr[i] = sum;
        sum += temp;
    }
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}