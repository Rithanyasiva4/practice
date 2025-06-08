#include <stdio.h>
int main() 
{
    int size;
    printf("ENTER A SIZE: ");
    scanf("%d", &size);
    int arr[size];
    printf("ENTER THE ELEMENTS OF ARRAY: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int majority_element = arr[size / 2];
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == majority_element) {
            count++;
        }
    }

    if (count > size / 2) {
        printf("The majority element is: %d\n", majority_element);
    } else {
        printf("No majority element\n");
    }

    return 0;
}