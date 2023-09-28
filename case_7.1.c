/* Write a program that uses a while loop to continally read, and then displays character input while the character input does not equal 'x' */

#include <stdio.h>
main()
{
	char c;
	c = ' ';

	printf("Enter a character:\n(enter x to exit)\n");
	
	while (c != 'x'){
	c = getc(stdin);
	putchar(c);
	}

	printf("\nOut of the while loop. Bye!\n");
	return 0;
}
