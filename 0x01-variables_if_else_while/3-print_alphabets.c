#include <stdio.h>
/**
 * main- print alphabets
 * Return: returns 0 if everything goes well
 */
int main(void)
{
char ch = 'a';
char cht = 'A';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
while (cht <= 'Z')
{
putchar(cht);
cht++;
}
putchar('\n');
return (0);
}

