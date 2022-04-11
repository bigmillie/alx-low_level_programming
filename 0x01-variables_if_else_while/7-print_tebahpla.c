#include <stdio.h>
/**
 * main- alphabet in reverse order
 * Return: returns 0 if program exists well
 */
int main(void)
{
char ch;
for (ch = 'z' ; ch >= 'a' ; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
