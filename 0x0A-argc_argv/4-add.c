#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument array
 * Return: 0 if succes 1 if error
 */
int main(int argc, char *argv[])
{
	int i, j, num, sum;

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			sum += num;
		}
	}
	printf("%d\n", sum);

	return (0);
}
