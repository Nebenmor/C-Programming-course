/* using nested if statements to print values divisible by 2 and 3 between the values of 0-100 */

#include <stdio.h>
main()
{
	int i;
	
	for (i=0; i <= 100; i++){
		if (i%2 == 0) 
			if(i%3 == 0)
			printf("%d\n", i);
		}
	return 0;
}
