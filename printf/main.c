//Basic Testing
#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    int ret1, ret2;

    // Basic string
    ret1 = ft_printf("Hello, %s!\n", "World");
    ret2 = printf("Hello, %s!\n", "World");
    printf("ft_printf: %d, printf: %d\n", ret1, ret2);

    // Character
    ret1 = ft_printf("Character: %c\n", 'A');
    ret2 = printf("Character: %c\n", 'A');
    printf("ft_printf: %d, printf: %d\n", ret1, ret2);

    // Integer
    ret1 = ft_printf("Integer: %d\n", 42);
    ret2 = printf("Integer: %d\n", 42);
    printf("ft_printf: %d, printf: %d\n", ret1, ret2);

    // Unsigned Integer
    ret1 = ft_printf("Unsigned: %u\n", 123456789);
    ret2 = printf("Unsigned: %u\n", 123456789);
    printf("ft_printf: %d, printf: %d\n", ret1, ret2);

    // Hexadecimal (lowercase)
    ret1 = ft_printf("Hex (lower): %x\n", 255);
    ret2 = printf("Hex (lower): %x\n", 255);
    printf("ft_printf: %d, printf: %d\n", ret1, ret2);

    // Hexadecimal (uppercase)
    ret1 = ft_printf("Hex (upper): %X\n", 255);
    ret2 = printf("Hex (upper): %X\n", 255);
    printf("ft_printf: %d, printf: %d\n", ret1, ret2);

    // Pointer
    int num = 42;
    ret1 = ft_printf("Pointer: %p\n", &num);
    ret2 = printf("Pointer: %p\n", &num);
    printf("ft_printf: %d, printf: %d\n", ret1, ret2);

    // Percentage
    ret1 = ft_printf("Percent sign: %%\n");
    ret2 = printf("Percent sign: %%\n");
    printf("ft_printf: %d, printf: %d\n", ret1, ret2);

    return 0;
}

//Edge Cases and Errors

// #include <stdio.h>
// #include "ft_printf.h"

// int main(void)
// {
//     int ret1, ret2;

//     // NULL string
//     ret1 = ft_printf("NULL string: %s\n", NULL);
//     ret2 = printf("NULL string: %s\n", NULL);
//     printf("ft_printf: %d, printf: %d\n", ret1, ret2);

//     // Large integer
//     ret1 = ft_printf("Large integer: %d\n", 2147483647);
//     ret2 = printf("Large integer: %d\n", 2147483647);
//     printf("ft_printf: %d, printf: %d\n", ret1, ret2);

//     // Negative integer
//     ret1 = ft_printf("Negative integer: %d\n", -2147483648);
//     ret2 = printf("Negative integer: %d\n", -2147483648);
//     printf("ft_printf: %d, printf: %d\n", ret1, ret2);

//     // Multiple format specifiers
//     ret1 = ft_printf("Mixed: %c %s %d %u %x %X %p %%\n", 'A', "Test", 42, 12345, 255, 255, &ret1);
//     ret2 = printf("Mixed: %c %s %d %u %x %X %p %%\n", 'A', "Test", 42, 12345, 255, 255, &ret1);
//     printf("ft_printf: %d, printf: %d\n", ret1, ret2);

//     return 0;
// }


//Stress Testing

// #include <stdio.h>
// #include "ft_printf.h"

// int main(void)
// {
//     int ret1, ret2;

//     // Empty format string
//     ret1 = ft_printf("");
//     ret2 = printf("");
//     printf("ft_printf: %d, printf: %d\n", ret1, ret2);

//     // Repeated format specifiers
//     ret1 = ft_printf("%d %d %d %d %d\n", 1, 2, 3, 4, 5);
//     ret2 = printf("%d %d %d %d %d\n", 1, 2, 3, 4, 5);
//     printf("ft_printf: %d, printf: %d\n", ret1, ret2);

//     // Invalid format specifier
//     ret1 = ft_printf("Invalid: %q\n");
//     ret2 = printf("Invalid: %q\n");
//     printf("ft_printf: %d, printf: %d\n", ret1, ret2);

//     return 0;
// }
