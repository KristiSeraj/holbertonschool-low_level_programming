#include "main.h"
/**
 * _sqrt_recursion - natural square root of a number
 * @n: number
 * Return: -1 if n does not have a natural square root
 */
int find_sqrt(int n, int root)
{
	if (root * root == n)
		return (root);
	if (root == n / 2)
		return (-1);
	else
		return (find_sqrt(n, root + 1));
}
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	else
		return (find_sqrt(n, 0));

}
