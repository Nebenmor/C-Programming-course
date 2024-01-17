/* using special cases of realloc() function */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void CopyStr(char *str1, char *str2)
{
	int  i;
	for(i = 0; str1[i]; i++)
	{
		str2[i] = str1[i];
	}
		str2[i] = '\0';
	
}

int main()
{
	char *ptr;
	int termination = 0;
	int i;
	
	
	char *str[4] = {"I am creative;",
			"I am hardworking;",
			"I am resilient;",
			"I am a software engineer.\n"
			};

	ptr = (char*) realloc(NULL, (strlen(str[0]) + 1) * sizeof(char));

	if (ptr == NULL)
	{
		printf("realloc() failed\n");
		termination = 1;
		printf("return value: %d\n", termination);
	}


	else
	{
		CopyStr(str[0], ptr);
		
		printf("ptr (from malloc) now contains: %s\n", ptr);
		
		for(i = 0; i < 4; i++)
		{
			ptr = (char*) realloc(ptr, strlen(str[i] + 1) * sizeof(char));

			if(ptr == NULL)
			{
			printf("realloc() failed\n");
			termination = 1;
			printf("return value: %d\n", termination);
			}

			else
			{
				CopyStr(str[i], ptr);

				printf("ptr (from realloc) now contains: %s\n", ptr);
			}
		}
	}

	realloc(ptr, 0);

	return termination;
}
