#include "main.h"
/**
 * _find_sqrt - check for natural square root of number
 * @root: square root
 * @n: number
 * Return: root for natural square root or -1 otherwise
 */
int _find_sqrt(int n, int root)
{
	if (root * root == n)
		return (root);
	if (root == n / 2)
		return (-1);
	else
		return (_find_sqrt(n, root + 1));
}
/**
 * _sqrt_recursion - return natural square root of number
 * @n: number
 * Return: -1 if n is less than 0 and 1 if number is 1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	else
		return (_find_sqrt(n, 0));

}
