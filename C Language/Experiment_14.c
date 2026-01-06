#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // declare array of size n

    // Input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Output elements
    printf("You entered:\n");
    for (i = 0; i < n; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}