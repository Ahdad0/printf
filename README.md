# ft_printf - Custom Printf Implementation

## Table of Contents
- [Overview](#overview)
- [Features](#features)
- [Format Specifiers](#format-specifiers)
- [Implementation Details](#implementation-details)
- [Build & Usage](#build--usage)
- [Examples](#examples)

## Overview

`ft_printf` is a custom implementation of the standard C library's printf function, developed as part of the 1337 school curriculum. This project demonstrates advanced C programming concepts including:

- Variadic functions
- String parsing and formatting
- Memory management
- Number system conversions
- Error handling

The implementation closely mirrors the original printf functionality while maintaining performance and reliability.

## Features

- Zero external dependencies
- No memory leaks
- Efficient buffer management
- Complete error handling
- POSIX compliant

## Format Specifiers

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

## Implementation Details

### Function Prototype
```c
int ft_printf(const char *format, ...);
