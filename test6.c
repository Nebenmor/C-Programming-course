/* Initializing an array */

#include <stdio.h>
int main()
{
	int i;
	int a[5];

	for(i=0; i<=4; i++){
		a[i] = i + 1;
		printf("a[%d] is initialized with %d\n", i, a[i]);
	}
	return 0;
}
