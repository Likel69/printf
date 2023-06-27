#include <limits.h>
#include <stdio.h>
#include "main.h"
#include <stdarg.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    while (*format != '\0') {
        if (*format == 's') 
        {
            char *s = va_arg(args, char *);
            putchar(*s);
        }
        else if (*format == 'c')
        {
            int c = va_arg(args, int);
            printf( "%c\n", (char)c ) ;
        }
        else if (*format == '%')
        {
            printf("%%") ;
        }
        ++format;
    }

    va_end(args);
    return(1);
} 

