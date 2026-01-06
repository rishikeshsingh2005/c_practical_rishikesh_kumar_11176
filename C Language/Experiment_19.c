#include <stdio.h>
#include <string.h> // required for string functions

int main()
{
    char str1[50], str2[50], str3[100];

    // Input strings
    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // strlen()
    printf("\nLength of str1 = %lu\n", strlen(str1));
    printf("Length of str2 = %lu\n", strlen(str2));

    // strcpy()
    strcpy(str3, str1);
    printf("\nAfter strcpy, str3 = %s\n", str3);

    // strcat()
    strcat(str3, str2);
    printf("After strcat, str3 = %s\n", str3);

    // strcmp()
    if (strcmp(str1, str2) == 0)
        printf("\nstr1 and str2 are equal.\n");
    else if (strcmp(str1, str2) < 0)
        printf("\nstr1 is smaller than str2.\n");
    else
        printf("\nstr1 is greater than str2.\n");

    return 0;
}