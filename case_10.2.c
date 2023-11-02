/* write a program that prints even and odd numbers between the range of 0-9 */

#include <stdio.h>

main()
{
	int i;

	printf("Even Number	Odd Number\n");
	for(i = 0; i<10; i++)
		if(i%2 == 0)
			printf("%d\n", i);
		
		else
			printf("%14d\n", i);
	
	return 0;
}
