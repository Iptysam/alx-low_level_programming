#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * followed by a new line
 * Return: Always (0)
 */

void print_numbers(void)
{
int num;
num = '0';
while (num < 10)
{
putchar(num);
num++;
}
putchar('/n');
}
