#include "3-calc.h"
/**
 * main - calculator program
 * @argc: number of arguments
 * @argv: array of arguments as strings
 * Return: int result of op
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*f)(int, int);
	/* validate input */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	f = get_op_func(argv[2]);

	if (f == NULL || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", f(num1, num2));

	return (0);
}
