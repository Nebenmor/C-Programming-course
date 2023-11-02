/* for a given set of numbers -5 to 5, write a program that prints all the negative, zero, odd, and even numbers if any */

#include <stdio.h>

main()
{
	int i;
	for (i = -5; i <= 5; i++){
		if(i > 0){	/* condition for positive numbers */
			if(i%2 == 0){	/* condition for even numbers */
				printf("Even number is %d\n", i);
			}
			else{	/* condition for odd number */
				printf("Odd number is %d\n", i);
			}
		}
		else if(i == 0){	/* condition for zero */
			printf("The number is %d\n", i);
			}
		else{	/* condition for negative statements */
			printf("negative number is %d\n", i);
		}
		}
	return 0;
}
