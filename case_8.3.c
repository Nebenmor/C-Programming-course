/* using the logical OR operator */

#include <stdio.h>

main()
{
	int i;

	printf("Enter a single digit that can be divided\nby both 2 and 3\n");
	for(i=1; (i%2 != 0) || (i%3 != 0);)
		i=getchar() - '0';
	
	printf("you got such a number:%d\n", i);
	return 0;
}
