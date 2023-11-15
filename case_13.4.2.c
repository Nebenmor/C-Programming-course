/* using the gets and puts functions */

#include <stdio.h>
main()
{
	char a[100];
	int convert = 'a' - 'A';
	int i;

	printf("input a string of small letters less than 100 characters\n");
		
	gets(a);

	for(i=0; a[i]; i++){
		if((a[i] >= 'a') && (a[i] <= 'z')){
			a[i] -= convert; /* converts to upper case */
		}
	}	

	printf("the converted characters are now\n");
	puts(a);
	
	return 0;
}
