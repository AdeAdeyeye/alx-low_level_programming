#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: always O
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int i, nbytes;

	if(argc !=2)
	{
		printf("Error\n');
		exit(1);
	}

	nbytes = atoi(argv[1]);
if(nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for(i = 0; i < nbytes; i++)
	{
		printf("%02x", opc[i] & oxFF);
		if (i!= nbytes - 1)
			printf("");
	}
	printf('\n');
	return (0);
}
