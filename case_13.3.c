/* copying strings using the strcpy function */

#include <stdio.h>
#include <string.h>

main()
{
	char a[] = "C programming";
	char b[14];
	char c[14];
	int i;

	printf("*method 1*\n");

	strcpy(b, a);

	printf("b[] now contains: %s\n", b);

	printf("*method 2*\n");

	for(i=0; a[i]; i++){
		c[i] = a[i];
		c[i]='\0';
	}
		printf("b[] now contains: %s", b);
		printf("\n");
	


	return 0;
}

