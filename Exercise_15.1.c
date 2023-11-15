/* functions with no arguments: exemplified using the time(), localtime(), and asctime() functions */

#include <stdio.h>
#include <time.h>

void GetDateTime(void);

main()
{
	printf("Before the GetDateTime() function is called.\n");
	GetDateTime();
	printf("After the GetDateTime() function is called.\n");
	return 0;
}

/* GetDateTIme() definition */
void GetDateTime(void)
{
	time_t now;

	printf("within GetDateTIme().\n");
	time (&now);
	printf("current date and time is: %c\n", asctime(localtime(&now)));
}
