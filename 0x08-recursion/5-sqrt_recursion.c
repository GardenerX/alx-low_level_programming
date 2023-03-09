#include "main.h"

/**
 * find_sqrt - find square
 * @num:input
 * @root:the root of the number
 * Return: the natural square root
 */

extern int find_sqrt(int num, int root);
int find_sqrt(int num, int root)
{
if ((root * root) == num)
return (root);

if (root == num / 2)
return (-1);

return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion -square root
 * @n:input
 *
 * Return: n
 */
int _sqrt_recursion(int n)
{
int root = 0;

if (n < 0)
return (-1);

if (n == 1)
return (1);

return (find_sqrt(n, root));
}
