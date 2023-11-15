#include <stdio.h>
main()
{
	double list_data[6] = {
				1.12345,
				2.12345,
				3.12345,
				4.12345,
				5.12345};

	int total_memory = sizeof(double) * 6;

	printf("list_data[6] has a total memory of %d-bytes\n", sizeof(list_data));

	printf("\n*method 2*\n");

	printf("\nlist_data[6] has a total memory of %d-bytes\n", total_memory);

	return 0;
}
