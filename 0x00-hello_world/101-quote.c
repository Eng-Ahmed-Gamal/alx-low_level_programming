#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints a message
 * Dora Korpar, 2015-10-19, followed by a new line.
 *
 * Return: Always 1 (Error occurred)
 */

int main(void)
{
char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, msg, sizeof(msg) - 1);
return (1);
}
