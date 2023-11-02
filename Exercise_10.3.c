/* write a program that reads characters from the standard I/O. If the characters are A,B, and C, display their numeric values on the screen
 *  (The switch statement is required) 
 */

#include <stdio.h>
main()
{
	int ch;
	
	printf("Enter an alphabet character\n");
	ch = getchar();


	switch (ch){
		case 'A':
			printf("The numeric value of %c is %d\n", ch, ch);
			break;

		case 'B':
			printf("The numeric value of %c is %d\n", ch, ch);
			break;

		case 'C':
			printf("The numeric value of %c is %d\n", ch, ch);
			break;

		default:
			printf("The alphabet is %c\n", ch);
	}
	return 0;
}			
