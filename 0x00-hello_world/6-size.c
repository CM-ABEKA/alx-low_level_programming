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
  long lo;
  long long llo;
  float fl;

  printf("Size of a char: %i byte(s)", sizeof(ch));
  printf("Size of an int: %i byte(s)", sizeof(in));
  printf("Size of a lont int: %i byte(s)", sizeof(lo));
  printf("Size of a long long int: %i byte(s)", sizeof(llo));
  printf("Size of a float: %i byte(s)", sizeof(fl));
  return (0);
}
