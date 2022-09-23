#incluude <stdio.h>"
/**
 * print_to_98 - Prints all natural numbers
 * from n to 98
 *
 * @n: input number.
 *
 * Return: None
 */
void print_to_98(int n)
{
	for (; n > 98; n--)
	{
		printf("%d, ", n);
	}
	else
	{
		for (; n < 98; n++)
		{
			printf("%d\n", n);
		}
	}
}

