#include <stdio.h>

int main()
{
    int i;

    printf("=== Demonstrating break ===\n");
    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            printf("Breaking at i = %d\n", i);
            break; // exits the loop completely
        }
        printf("i = %d\n", i);
    }

    printf("\n=== Demonstrating continue ===\n");
    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            printf("Skipping i = %d\n", i);
            continue; // skips this iteration, goes to next
        }
        printf("i = %d\n", i);
    }

    return 0;
}