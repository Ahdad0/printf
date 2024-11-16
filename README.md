# ft_printf - Custom Printf Implementation

| Specifier | Description | Example | Output |
|-----------|-------------|---------|---------|
| `%c` | Single character | `ft_printf("%c", 'A')` | `A` |
| `%s` | String | `ft_printf("%s", "Hello")` | `Hello` |
| `%p` | Pointer address | `ft_printf("%p", ptr)` | `0x7fff5fbff8e8` |
| `%d` | Decimal number | `ft_printf("%d", 42)` | `42` |
| `%i` | Integer | `ft_printf("%i", -42)` | `-42` |
| `%u` | Unsigned decimal | `ft_printf("%u", 42)` | `42` |
| `%x` | Lowercase hexadecimal | `ft_printf("%x", 255)` | `ff` |
| `%X` | Uppercase hexadecimal | `ft_printf("%X", 255)` | `FF` |
| `%%` | Percentage sign | `ft_printf("%%")` | `%` |

## Description
`ft_printf` is a comprehensive reimplementation of the standard C library's printf function, developed as part of the 1337 school curriculum. This project challenges students to understand variadic functions, string parsing, and various number systems while maintaining memory efficiency and proper error handling.

The implementation closely mirrors the behavior of the original printf function, providing essential formatting capabilities for C programs. This custom version maintains high performance while ensuring accurate output across all supported format specifiers.

## Function Overview

### Function Prototype
```c
int ft_printf(const char *format, ...);
