/* stopping at the null pointer 
 * print out an array of characters as string
 */

#include <stdio.h>
main()
{
	int i;
	char array_ch[15] = {'C', ' ',
				'i', 's',' ',
				'p','o','w','e','r',
				'f','u','l','!','\0'};

	printf("%s\n", array_ch);

	printf("*method two*\n");

	for(i=0; array_ch[i]; i++){
		printf("%c", array_ch[i]);
	}
		printf("\n");


	return 0;
}
