#include "main.h"

/**
 * findbinary - gets the binary
 * equivalent of the decimal
 * @decimal: input decimal
 * Return: the binary
 */
int findbinary(int decimal)
{
	if (decimal == 0)
		return (0);
	return (decimal % 2 + 10 * findbinary(decimal / 2));
}

/**
 * print_binary - prints the bi
 * @bi: the number to print
 *
 * Return: count_fun
 */
int print_binary(int bi)
{
	int count_fun = 0;

	if (bi / 10)
		print_binary(bi / 10);
	count_fun += _putchar(bi % 10 + '0');

	return (count_fun);
}
/**
 * convert_to_bi - converts arg to binary
 * and prints
 * @args: pointer to considered arg
 * Return: count_fun.
 */
int convert_to_bi(va_list args)
{
	int decimal = va_arg(args, unsigned int);
	int count_fun = 0, binary;
	
	/* converting the decimal to binary */
	binary = findbinary(decimal);
	/* counting the number times printfunction is used
	 * and printing the binary number */
	count_fun += print_binary(binary);
	return (count_fun);
}
