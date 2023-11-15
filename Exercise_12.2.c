#include <stdio.h>
main()
{
	char array_ch[5] = {'a', 'b', 'c', 'd', 'e'};
	int i;

	for(i=0; i<5; i++){
		printf("array_ch[%d] contains %c\n", i, array_ch[i]);
	}

	return 0;
}
