#include "main.c"

/**
* is_prime_number - a function that returns 1 if the
* input integer is a prime number, otherwise return 0
*
* @a: input
* @b: input
*
* Return: result
*/

int check_prime(int a, int b);

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
* check_prime - iteratively checks if input is prime number
*
* @a: input
* @b: check
*
* Return: resuit
*/

int check_prime(int a, int b)
{
	if (b >= a && a > 1)
		return (1);
	else if (a % b == 0 || a <= 1)
		return (0);
	else
		return (check_prime(a, b + 1));
}
