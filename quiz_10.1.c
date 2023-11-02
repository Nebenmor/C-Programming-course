/* What is the value of the integer variable x after the following code is executed */

#include <stdio.h>
main()
{
	int i, x;
	x = 1;
	
	for(i=2; i<10; i++){
		if(i%3 == 0)
		continue;
		x += i;
	}
	printf("the value of x is %d\n", x);
	return 0;
}
