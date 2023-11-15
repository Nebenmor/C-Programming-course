/* printing an array of characters */

#include <stdio.h>
main()
{
	int i;
	
	char a[] = {'H','e','l','l','o','!','\0'};

	for(i=0; i<7; i++){
	printf("array[%d] contains %c\n", i, a[i]);
	}

	printf("%s\n", a);

	return 0;
}
