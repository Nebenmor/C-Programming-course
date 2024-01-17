/* Passing structures to function */

#include <stdio.h>

struct automobile{
	char name_of_car[20];
        int year;
        char model[20];
        int engine_number;
        float weight;
	};

typedef struct automobile SC;

SC DataSub(SC s); /* function declaration */
SC DataSub(SC s) /* function definition */
{
 printf("Enter the name of your car\n");
        gets(s.name_of_car);

        printf("Enter the year your car was produced\n");
        scanf("%d", &s.year);

        printf("Enter the model of your car\n");
        scanf("%s", s.model);

        printf("Enter the engine number of your car\n");
        scanf("%d", &s.engine_number);

        printf("Enter the weight of your car\n");
        scanf("%f", &s.weight);

	return s;
}

main()
{
	SC model = DataSub(model);

	printf("\nHere's what you entered:\n");
	printf("Name of car: %s\n", model.name_of_car);
	printf("Year of car production: %d\n", model.year);
	printf("Model: %s\n", model.model);
	printf("Engine number:%d\n", model.engine_number);
	printf("Weight:%.2f\n", model.weight);

	return 0;
}
