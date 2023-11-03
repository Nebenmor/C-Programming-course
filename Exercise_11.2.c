/* updating the values of a variable */

#include <stdio.h>
main()
{
	double flt_num, *ptr_1;
	flt_num = 123.45;

	printf("Initial value of flt_num: %0.2f\n", flt_num);

	ptr_1 = &flt_num;
	*ptr_1 = 543.21;

	printf("*ptr_1 >> %0.2f\n", *ptr_1);
	printf("Updated flt_num value >> %0.2f\n", flt_num);

	return 0;
}
