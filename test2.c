/* using a do-while loop to print A through G */

#include <stdio.h>

main()
{
	int i;
	i = 65;

	do{
		printf("The numeric value of %c is %d.\n", i, i);
		i++;
	}
	while(i <= 71);

	return 0;
}
