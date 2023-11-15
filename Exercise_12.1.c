/* A program that displays each element of an array on the screen */

#include <stdio.h>
main()
{
	char array_ch[5] = {'A', 'B', 'C', 'D', 'E'};
	int i;

	for(i=0; i<5; i++){
		printf("array_ch [%d] contains %c\n", i, array_ch[i]);
	}

	return 0;
}
