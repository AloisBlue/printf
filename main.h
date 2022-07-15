#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *str);
void _puts(char *str);
char *_convert(unsigned int num, int base);
int _intlen(int i);
int print_str(char *str);
int print_digit(int i);
int print_else(const char *format, int i);

#endif
