#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    printf("Before swap: a = %d, b = %d\n", a, b);

    // Swap using a temporary variable
    int temp = a;
    a = b;
    b = temp;

    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}