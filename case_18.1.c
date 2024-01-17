/* defining enum data type */

#include <stdio.h>

main()
{
	enum month {January = 10, February = 25, March, April, May = 13, June = 50, July = 51, August = 52, September = 53, October, November, December};
	enum month first_month, second_month;

	enum gender {male, female};

	printf("January = %d\n February = %d\n March = %d\n April = %d\n May = %d\n June = %d\n July = %d\n August = %d\n September = %d\n October = %d\ November = %d\n December = %d\n", January, February, March, April, May, June, July, August, September, October, November, December);

	printf("\nmale = %d\n female = %d\n", male, female);

	return 0;
}
