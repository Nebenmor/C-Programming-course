/* using the scanf function */

#include <stdio.h>

main()
{
	char a[50];
	int x, y, z;
	float b;

	printf("enter a string of less than 50 characters\n");
	scanf("%s", &a[0]);
	printf("enter three integers seperated by single spaces\n");
	scanf("%d %d %d", &x, &y, &z);
	printf("enter a float number\n");
	scanf("%f\n", &b);
	printf("Here are what you have entered\n");
	printf("%s\n%d %d %d\n%f\n", a, x, y, z, b);
	
	return 0;
}
