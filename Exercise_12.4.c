#include <stdio.h>
main()
{
	int i;
	char array_ch[] = {'I', ' ',
				'l', 'i', 'k','e', ' ',
				'C', '!', '\0'};

	printf("%s", array_ch);
	printf("\n*method 2*\n");

	for(i=0; array_ch[i]; i++){
		printf("%c", array_ch[i]);
	} 
	printf("\n");
	return 0;
}
