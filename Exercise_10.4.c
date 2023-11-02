/* write a program that keeps reading characters from the standard input untll the character q is entered */

#include <stdio.h>

main()
{
	int ch;

	printf("Enter a character\n(q to exit)\n");

	for(;;){
		ch = getc(stdin);
		if(ch == 'q')
			break;
	}

	printf("out of the infinte for loop. Bye!\n");
}
