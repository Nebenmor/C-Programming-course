/* using the "while" statement */

#include <stdio.h>
main()
{
	int a;
	a = ' ';

	printf("Enter a character:\n(enter k to exit)\n");
	while (a != 'k'){
		a = getchar();
	printf("%c", a);
	}

	printf("\nOut of the while loop. Bye!\n");
	return 0;
}
