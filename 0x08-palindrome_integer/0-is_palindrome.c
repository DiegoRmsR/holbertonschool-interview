#include "palindrome.h"

/**
 * is_palindrome - checks whether or not a given
 * unsigned integer is a palindrome.
 * @n: number to be checked.
 *
 * Return: 1 if s is a palindrome, 0 if not.
 */

int is_palindrome(unsigned long n)
{
	unsigned long nbuf, naux, len;

	nbuf = n;
	len = 1;

	while (nbuf / 10)
	{
		nbuf /= 10;
		len *= 10;
	}

	naux = 0;
	nbuf = n;

	while (len / 10)
	{
		naux = (naux * 10) + (nbuf % 10);

		if (naux != (n / len))
			return (0);

		len /= 10;
		nbuf /= 10;
	}

	return (1);
}
