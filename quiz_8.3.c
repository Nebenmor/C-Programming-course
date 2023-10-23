/* Given x=9, what does (x%2==0)||(x%3==0) yield? How about (x%2==0)&&(x%3==0)? */

#include <stdio.h>
main()
{
	int x;
	x = 9;

	printf("(x%2==0)||(x%3==0) yield %d\n", (x%2==0)||(x%3==0));
	printf("(x%2==0)&&(x%3==0) yield %d\n", (x%2==0)&&(x%3==0));
	return 0;
}
