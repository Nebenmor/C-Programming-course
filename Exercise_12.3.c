#include <stdio.h>
main()
{
	char list_ch[] [2] = {
				'1', 'a',
				'2', 'b',
				'3', 'c',
				'4', 'd',
				'5', 'e',
				'6', 'f'};

	int i, j;
	printf("total bytes taken by list_ch[][2] is %d-bytes\n",  sizeof(list_ch));

	for(i=0; i<6; i++){
		printf("\n");

		for(j=0; j<2; j++){
			printf("%4c", list_ch[i][j]);
		}
	}

	printf("\n");
	return 0;
}
