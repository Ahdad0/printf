# ft_printf - Custom Printf Implementation

## Table of Contents
- [Description](#description)
- [Function Overview](#function-overview)
- [Supported Format Specifiers](#supported-format-specifiers)
- [Project Structure](#project-structure)
- [Technical Details](#technical-details)
- [Getting Started](#getting-started)
- [Usage Examples](#usage-examples)
- [Testing](#testing)
- [Common Issues](#common-issues)
- [Contribution Guidelines](#contribution-guidelines)
- [Author](#author)
- [Acknowledgments](#acknowledgments)

## Description
`ft_printf` is a comprehensive reimplementation of the standard C library's printf function, developed as part of the 1337 school curriculum. This project challenges students to understand variadic functions, string parsing, and various number systems while maintaining memory efficiency and proper error handling.

The implementation closely mirrors the behavior of the original printf function, providing essential formatting capabilities for C programs. This custom version maintains high performance while ensuring accurate output across all supported format specifiers.

## Function Overview

### Function Prototype
```c
int ft_printf(const char *format, ...);
