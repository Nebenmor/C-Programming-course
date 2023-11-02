/* write a program that prints out all numbers between 0-100 except those divisible by 3 and 5 */

#include <stdio.h>
main()
{
	int i;
	for(i = 0; i <= 100; i++){
		if((i%3 == 0 || i%5 == 0)){
			continue;
		}
		printf("%d\n", i);
	}
	
	return 0;
}
