/* using the struct data type */

#include <stdio.h>

main()
{
	struct automobile{
		char name_of_car[20];
		int year;
		char model[20];
		int engine_number;
		float weight;
	}Benz;

	printf("Enter the name of your car\n");
	gets(Benz.name_of_car);

	printf("Enter the year your car was produced\n");
	scanf("%d", &Benz.year);

	printf("Enter the model of your car\n");
	scanf("%s", Benz.model);

	printf("Enter the engine number of your car\n");
	scanf("%d", &Benz.engine_number);

	printf("Enter the weight of your car\n");
	scanf("%f", &Benz.weight);

	printf("\nHere's what you entered:\n");
	printf("Name of car: %s\n", Benz.name_of_car);
	printf("Year of car production: %d\n", Benz.year);
	printf("Model: %s\n", Benz.model);
	printf("Engine number:%d\n", Benz.engine_number);
	printf("Weight:%.2f\n", Benz.weight);

	return 0;
}
