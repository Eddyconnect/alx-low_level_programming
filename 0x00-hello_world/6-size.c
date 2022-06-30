#include <stdio.h>

/**
 * main - print the size of varius  types
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
printf("size of a char: xd byte(s)\n", sizeof(char));
printf("size of an int: xd byte(s)\n", sizeof(int));
printf("size of a long int: xd byte(s)\n", sizeof(long int));
printf("size of a long long int: xd byte(s)\n", sizeof(long long int));
printf("size of a float: xd byte(s)\n", sizeof(float));
}
