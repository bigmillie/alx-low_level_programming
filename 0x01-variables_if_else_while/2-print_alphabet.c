#include <stdio.h>
/**
 * main- printing lowercase alphabets
 * Retuen: returns 0 if program exits well
 */
int main(void)
{
char chat;
for (chat = 'a'; chat <= 'z'; chat++)
{
putchar(chat);
putchar('\n');
}
return (0);
}
