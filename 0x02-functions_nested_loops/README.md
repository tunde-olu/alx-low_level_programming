# 0x02. C - Functions, nested loops


0. Write a program that prints _putchar, followed by a new line.
	- The program should return 0

1. Write a function that prints the alphabet, in lowercase, followed by a new line.

	- Prototype: void print_alphabet(void)
	- You can only use _putchar twice in your code

2. Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.

	- Prototype: void print_alphabet_x10(void);
	- You can only use _putchar twice in your code

3. Write a function that checks for lowercase character.

	- Prototype: int _islower(int c);
	- Returns 1 if c is lowercase
	- Returns 0 otherwise
		- FYI: The standard library provides a similar function: islower. Run man islower to learn more.

4. Write a function that checks for alphabetic character.

	- Prototype: int _isalpha(int c);
	- Returns 1 if c is a letter, lowercase or uppercase
	- Returns 0 otherwise
		- FYI: The standard library provides a similar function: isalpha. Run man isalpha to learn more.

5. Write a function that prints the sign of a number.

	- Prototype: int print_sign(int n);
	- Returns 1 and prints + if n is greater than zero
	- Returns 0 and prints 0 if n is zero
	- Returns -1 and prints - if n is less than zero

6. Write a function that computes the absolute value of an integer.

	- Prototype: int _abs(int)
		- FYI: The standard library provides a similar function: abs. Run man abs to learn more.

7. Write a function that prints the last digit of a number.

	- Prototype: int print_last_digit(int);
	- Returns the value of the last digit

8. Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.

	- Prototype: void jack_bauer(void);
	- You can listen to this soundtrack while coding :)