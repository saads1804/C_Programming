#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

	char str[80];
	strcpy(str, "these ");
	strcat(str, "strings ");
	strcat(str, "are ");
	strcat(str, "concatenated.");

	for(int i = 0 ; i < 1 ; ++i)
	{	
		printf("the array is : %s", &str[i]);
	}
	return 0;
}

