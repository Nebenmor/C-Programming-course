/* write a program that adds up all numbers between 1-10 except those divisible by 10 */

#include <stdio.h>
main()
{
	int i, sum;
	sum = 0;
	for (i=1; i <= 10; i++){
		if ((i%3 == 0 || i%5 == 0)){;
		continue;
		}
		sum += i;
	}
	printf("The sum is %d\n", i);
	
	return 0;
}
