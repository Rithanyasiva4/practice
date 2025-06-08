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
    for (int i = 0; i < size; i++) 
    {
        sum += arr[i];
    }
    printf("Modified array: ");
    for (int i = 0; i < size; i++) 
    {
        arr[i] = sum - arr[i];
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
