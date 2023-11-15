#include <stdio.h>
main()
{
	static int i = 20;
	int j = 10;
	int k = 5;
	int l = 2;

	printf("i += j: %d\n", i += j);
	printf("i += k: %d\n", i += k);

	i = 50;
	printf("i += l: %d\n", i += l);

	return 0;
}
