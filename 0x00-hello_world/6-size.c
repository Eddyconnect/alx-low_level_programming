#include <stdio.h>

/**
 * main - print the size of varius  types
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
printf("sizeof char is %zu\n", sizeof(char));
printf("sizeof int is %zu\n", sizeof(int));
printf("sizeof long int is %zu\n", sizeof(long int));
printf("sizeof long long int is %zu\n", sizeof(long long int));
printf("sizeof float is %zu\n", sizeof(float));
return (0);
}
