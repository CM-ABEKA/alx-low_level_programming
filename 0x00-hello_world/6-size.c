#include <stdio.h>

/**
 * main- Entry point
 *
 * Description: 'this program prints the sizes of the various data types on the host machine'
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char ch;
	int in;
      	long int lo;
      	long long int llo;
      	float fl;
      
	printf("Size of a char: %i byte(s)\n", sizeof(ch));
      	printf("Size of an int: %i byte(s)\n", sizeof(in));
      	printf("Size of a lont int: %i byte(s)\n", sizeof(lo));
      	printf("Size of a long long int: %i byte(s)\n", sizeof(llo));
      	printf("Size of a float: %i byte(s)\n", sizeof(fl));
      	return (0);
}
