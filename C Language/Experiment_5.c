#include <stdio.h>

int main()
{
    // Different data types
    int i = 42;             // Integer
    float f = 3.14159;      // Floating-point
    double d = 2.718281828; // Double precision floating-point
    char c = 'A';           // Character
    char str[] = "Hello";   // String

    // Printing with format specifiers
    printf("Integer: %d\n", i);              // %d for int
    printf("Float: %f\n", f);                // %f for float
    printf("Float (2 decimals): %.2f\n", f); // %.2f for precision
    printf("Double: %lf\n", d);              // %lf for double
    printf("Character: %c\n", c);            // %c for char
    printf("String: %s\n", str);             // %s for string

    // Additional specifiers
    printf("Hexadecimal: %x\n", i); // %x for hex
    printf("Octal: %o\n", i);       // %o for octal
    printf("Unsigned: %u\n", i);    // %u for unsigned int

    return 0;
}