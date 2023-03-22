# 0x03. C - Debugging


1. In most projects, we often give you only one main file to test with. For example, this main file is a test for a postitive_or_negative() function similar to the one you worked with in an earlier C project:


'''c
#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
        int i;

        i = 98;
        positive_or_negative(i);

        return (0);
}
'''

'''c
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i);

#endif /* MAIN_H */
'''


1. Copy this main file. Comment out (don’t delete it!) the part of the code that is causing the output to go into an infinite loop.

	- Don’t add or remove any lines of code, as we will be checking your line count. You are only allowed to comment out existing code.
	- You do not have to compile with -Wall -Werror -Wextra -pedantic for this task.

2. This program prints the largest of three integers.

	- This program converts a date to the day of year and determines how many days are left in the year, taking leap year into consideration.
