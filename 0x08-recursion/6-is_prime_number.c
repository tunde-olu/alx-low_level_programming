/**
  * check_prime - check if @num is a prime number
  * @test: iterator
  * @num: number to check
  * Return: 1 if num is a prime, else return 0 otherwise.
  */

int check_prime(int test, int num)
{
	if (num % test == 0 || num <= 2)
		return (0);
	else if (test == num - 1)
		return (1);
	else if (num > test)
		return (check_prime(test + 1, num));

	return (1);
}


/**
  * is_prime_number - returns 1 if the input integer is a prime number,
  *	otherwise return 0
  * @n: number to check
  * Return: 1 if n is a prime, else return 0 otherwise.
  */

int is_prime_number(int n)
{
	return (check_prime(2, n));
}

