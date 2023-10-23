/* using the conditinal operator in a for loop */

#include <stdio.h>
main()
{
	int x;
	printf("Enter a character:\n(enter q to exit)\n");
	for(x = ' '; x != 'q' ? 1:0;){
		x = getc(stdin);
		putchar(x);
	}
	printf("\nOut of the for loop. Bye!\n");
	return 0;
}
