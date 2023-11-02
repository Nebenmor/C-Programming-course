/* using the break statement to exit the infinite loop */

#include <stdio.h>

main()
{
	int i;
	
	for (;;){
	i = getc(stdin);
	if (i == 'x')
		break;
	
	}

	printf("Break the while loop. Bye!\n");
	
	return 0;
}
