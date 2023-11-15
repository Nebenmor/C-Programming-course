/* write a program that prints the  numbers 2,4,6,8 in reverse assuming it is an array */

#include <stdio.h>
int main(void)
{
	int i;
	int a[4] = {2,4,6,8};

	for(i=0; i<5; i++){
		a[i] = i + 2;
		printf("original: %d\n", a[i]);
	}

	for(i=10; i>=2; i--){
		a[i]= i-2;
       	printf("reverse: %d\n", a[i]);
	}

		return 0;
}

