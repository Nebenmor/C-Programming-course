/* write a program that uses enum in switch cases */

#include <stdio.h>

main()
{
	enum month {Jan = 10, Feb = 20, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

	printf("Enter a month of the year\n");

	scanf("%s", &month);

	switch(m){
		case 'Jan':
			printf("%d\n", Jan);
			break;

		case 'Feb':
			printf("The second month of the year is February\n");
			break;

		case 'Mar':
                        printf("The Third month of the year is March\n");
                        break;

		case 'Apr':
                        printf("The Fourth month of the year is April\n");
                        break;
		
		case 'May':
                        printf("The Fifth month of the year is May\n");
                        break;
			
		case 'Jun':
                	printf("The Sixth month of the year is June\n");
                        break;

		case 'Jul':
                        printf("The Seventh month of the year is July\n");
                        break;
		
		case 'Aug':
                        printf("The Eight month of the year is August\n");
                        break;

                case 'Sep':
                        printf("The Ninth month of the year is September\n");
                        break;

		case 'Oct':
                        printf("The Tenth month of the year is October\n");
                        break;

                case 'Nov':
                        printf("The Eleventh month of the year is November\n");
                        break;

                case 'Dec':
                        printf("The Twelfth month of the year is December\n");
                        break;

		default:
			printf("Thanks\n");

	}

	return 0;
}
