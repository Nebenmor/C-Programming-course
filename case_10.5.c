/* using the break statement */

#include <stdio.h>

main()
{
	int day;
	day = '	';

	printf("Enter a single digit\n(within the range of 1-7)\n");
	
	day = getchar();
	switch (day){
		case '1':
		       printf("Day 1 is monday\n");
	       	break;
		
		case '2':
			printf("Day 2 is teusday\n");
		break;
		default:
		printf("End of the week\n");
	}
return 0;
}
