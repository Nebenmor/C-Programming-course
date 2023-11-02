#include <stdio.h>

main()
{
	int i, sum;
	sum = 0;

	for(i = 1; i<8; i++){
		if((i == 2) || (i == 3))
			continue;
		sum += i;
	}
	printf("The sum of 1, 4, 5, 6, and 7 is %d\n", sum);

	return 0;
}
