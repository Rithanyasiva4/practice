#include <stdio.h>
int main()
{
    int size = 6;
    int arr[size];
    printf("ENTER A SIZE: ");
    scanf("%d", &size);
    printf("ENTER THE ELEMENTS OF ARRAY: ");
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int prev = arr[0];
    arr[0] = arr[0] * arr[1];
    for (int i = 1; i < size - 1; i++)
    {
        int temp = arr[i];
        arr[i] = prev * arr[i + 1];
        prev = temp;
    }
    arr[size - 1] = prev * arr[size - 1];
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
