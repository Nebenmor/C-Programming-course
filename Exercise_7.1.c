/* Comparing "for" statements with "for" statement that has a null statement  */

#include <stdio.h>
main()
{
	int i, j;
	for (i=0, j=1; i<8; i++, j++)
		printf("%d + %d = %d\n", i, j, i+j);

	printf("\n");
	for (i=0, j=1; i<8; i++, j++);
	printf("%d + %d = %d\n", i, j, i+j);
	return 0;
}
