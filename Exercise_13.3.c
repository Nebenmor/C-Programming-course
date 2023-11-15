/* A program that converts capital letters to small letters */

#include <stdio.h>
main()
{
	char str[80];
	int i, delt = 'a' - 'A';

	printf("Enter a string less than 80 characters:\n");

	gets(str);
	
	for(i = 0; str[i]; i++){
		if((str[i] >= 'A') && (str[i] <= 'Z'))
		str[i] += delt;
	}	

	printf("the converted characters (now lower case) are:\n");

	puts(str);

	return 0;
}
