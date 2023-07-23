#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes of its own main function
 * @argc: argument count
 * @argv: array of arguments passed
 *
 * Return: on success 0, 1 or 2 on failure
 */
int main(int argc, int *argv[])
{
	int bytes, i;
	const char *cbytes = (const char *)argv[1];
	void *main_address = (void *)main;
	unsigned char *opcodes = (unsigned char *)main_address;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(cbytes);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}


	for (i = 0; i < bytes; i++)
	{
		printf("%02hhx ", opcodes[i]);
	}
	printf("\n");
	return (0);
}
