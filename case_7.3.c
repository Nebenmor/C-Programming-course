/* A program converting 0 through 15 to Hex numbers using a for loop */

#include <stdio.h>

main()
{
	int i;
	printf("Hex(uppercase)  Hex(lowercase)  Decimal\n");

	for (i = 0; i < 16; i++){
		printf("%X		%x		%d\n", i, i, i);
	}
	return 0;
}
