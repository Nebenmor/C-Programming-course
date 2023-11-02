/* Using a while loop to print A through G */

#include <stdio.h>
main()
{
	int i;
	i = 65;

	while(i <= 71){
		printf("The numeric value of %c is %d.\n", i, i);
		i++;
	}
	return 0;
}
