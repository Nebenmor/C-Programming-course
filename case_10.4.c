/* using the switch statement */

#include <stdio.h>
main()
{
	int day;
	day = ' ';

	printf("Please enter a single digit for a day\n(within he range of 1-5)\n");
	day = getc(stdin);
	switch(day){
		case '1':
			printf("day '1'\n");
		case '2':
			printf("day '2'\n");
		case '3':
			printf("day '3'\n");
		case '4':
                        printf("day '4'\n");
                case '5':
                        printf("day '5'\n");
		default:
		;
	}
	return 0;
}
