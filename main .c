#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    // 1. Test with multiple format specifiers in one string
    printf("Test 1: Multiple formats:\n");
    ft_printf("Multiple formats: %c %s %d %u %x %X %p %%\n", 'A', "Hello", 42, 4294967295, 255, 255, (void*)0x102cac890);
    printf("\n");

    // 2. Test with zero or negative numbers
    printf("Test 2: Zero and negative numbers:\n");
    ft_printf("Zero: %d, Negative: %d\n", 0, -42);
    printf("\n");

    // 3. Test with NULL pointer
    printf("Test 3: Null pointer:\n");
    ft_printf("Null pointer: %p\n", NULL);
    printf("\n");

    // 4. Test with large numbers
    printf("Test 4: Large numbers:\n");
    ft_printf("Large number: %d, %u, %x, %X\n", 2147483647, 2147483647, 2147483647, 2147483647);
    printf("\n");

    // 5. Test with an empty string
    printf("Test 5: Empty string:\n");
    ft_printf("Empty string: %s\n", "");
    printf("\n");

    // 6. Test with NULL string
    printf("Test 6: Null string:\n");
    ft_printf("Null string: %s\n", NULL);
    printf("\n");

    // 7. Test with %% specifier
    printf("Test 7: Percent sign:\n");
    ft_printf("Percent sign: %%\n");
    printf("\n");

    // 8. Test with combination of all specifiers
    printf("Test 8: Combination of all specifiers:\n");
    ft_printf("Combination: %c %s %d %i %u %x %X %p %%\n", 'B', "World", 123, -123, 456789, 987654, 123456, (void*)0x12345678);
    printf("\n");

    // 9. Test with very large pointer values
    printf("Test 9: Large pointer:\n");
    ft_printf("Large pointer: %p\n", (void*)0x7f8a9d3021b0);
    printf("\n");

    // 10. Test with multiple %% in a row
    printf("Test 10: Multiple percent signs:\n");
    ft_printf("Multiple percent signs: %% %% %%\n");
    printf("\n");

    // 11. Test with leading zeros for numbers
    printf("Test 11: Leading zeros:\n");
    ft_printf("Leading zeros: %05d, %010u, %04x\n", 42, 12345, 255);
    printf("\n");

    // 12. Test with string containing special characters
    printf("Test 12: Special string with special characters:\n");
    ft_printf("Special string: %s\n", "Line 1\nLine 2\tTabbed");
    printf("\n");

    // 13. Test with large integers (boundary values)
    printf("Test 13: Boundary values:\n");
    ft_printf("Boundary values: %d, %u\n", INT_MAX, UINT_MAX);
    printf("\n");

    // 14. Test with negative values for unsigned specifier
    printf("Test 14: Negative as unsigned:\n");
    ft_printf("Negative as unsigned: %u\n", -1);
    printf("\n");

    // 15. Test with zero pointer value
    printf("Test 15: Zero pointer value:\n");
    ft_printf("Zero pointer: %p\n", (void*)0);
    printf("\n");

    // 16. Test with very large numbers in hexadecimal
    printf("Test 16: Large hex numbers:\n");
    ft_printf("Large hex (lower): %x, Large hex (upper): %X\n", 9223372036854775807, 9223372036854775807);
    printf("\n");

    // 17. Test with a long string
    printf("Test 17: Long string:\n");
    char long_str[1000];
    for (int i = 0; i < 1000; i++) {
        long_str[i] = 'A';
    }
    long_str[999] = '\0';
    ft_printf("Long string: %s\n", long_str);
    printf("\n");

    return 0;
}
