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

  printf("Size of char: %id byte(s)", sizeof(ch));
  printf("Size of int: %id byte(s)", sizeof(in));
  printf("Size of lont int: %id byte(s)", sizeof(lo));
  printf("Size of long long int: %id byte(s)", sizeof(llo));
  printf("Size of float: %id byte(s)", sizeof(fl));
  return (0);
}
