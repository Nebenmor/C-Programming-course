#include <stdio.h>

main()
{
	int ch;
	ch = 'A';

	printf("Initial value of ch is %c\n", ch);
	
	int *ptr_ch;
	ptr_ch = &ch;

	*ptr_ch = 66;
	printf("*ptr_ch >> %d\n", *ptr_ch);
	printf("Updated value of ch is %d\n", ch);

	return 0;
}
