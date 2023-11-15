/* show each element of the array char array_ch [7] = {'H,', 'e', 'l', 'l', 'o', '!', '\0'} and print the arrays together */

#include <stdio.h>
main()
{
	char array_ch [7] = {'H', 'e', 'l', 'l', 'o', '!', '\0'};
	int i;

	for(i=0; i<7; i++){
		printf("array_ch[%d] is initialized with %c\n", i, array_ch[i]);
	}

	printf("%s\n", array_ch);
	return 0;
}
