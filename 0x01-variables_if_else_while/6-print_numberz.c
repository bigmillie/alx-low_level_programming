#include <stdio.h>
/**
 * main- print decimal with putchar
 * Return: returns 0 if things goes well
 */
int main(void)
{
int ch;
for (ch = 0 ; ch < 10 ; ch++)
{
putchar(48 + ch);
}
putchar('\n');
return (0);
}
