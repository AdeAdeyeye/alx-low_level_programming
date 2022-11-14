#include <stdio.h>

/**
 * ain - prints the name of the file the program
 * was compiled from, followed by new line
 *
 * Return: always 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
