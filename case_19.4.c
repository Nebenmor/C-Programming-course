/* Pointing to a structure */

#include <stdio.h>

struct automobile{
	char name_of_car[20];
        int year;
        char model[20];
        int engine_number;
        float weight;
	};

typedef struct automobile SC;

void DataSub(SC *ptr_s); /* function declaration */
void DataSub(SC *ptr_s) /* function definition */
{
 printf("Enter the name of your car\n");
        gets((*ptr_s).name_of_car);

        printf("Enter the year your car was produced\n");
        scanf("%d", &(*ptr_s).year);

        printf("Enter the model of your car\n");
        scanf("%s", &(*ptr_s).model);

        printf("Enter the engine number of your car\n");
        scanf("%d", &(*ptr_s).engine_number);

        printf("Enter the weight of your car\n");
        scanf("%f", &(*ptr_s).weight);
}

main()
{
	SC model;
	DataSub(&model);

	printf("\nHere's what you entered:\n");
	printf("Name of car: %s\n", model.name_of_car);
	printf("Year of car production: %d\n", model.year);
	printf("Model: %s\n", model.model);
	printf("Engine number: %d\n", model.engine_number);
	printf("Weight: %.2f\n", model.weight);

	return 0;
}
