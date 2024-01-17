#include <stdio.h>

void printMD(char str[2][15], int max1);

main()
{
	char str[2][15] = {"You know what,",
	       	"C is powerful."
	};

	printMD(str, 2);

	return 0;
}

void printMD(char str[2][15], int max1)
{
	int i;
	for(i = 0; i < max1; i++)
	{
			printf("%s\n", str[i]);
	}
}
