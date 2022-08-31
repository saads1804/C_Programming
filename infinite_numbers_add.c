#include <stdlib.h>
#include <stdio.h>

void main ()
{
	int n , i , sum , *ptr ;

	printf("enter the number of elements to add");
	scanf("%d" , &n);

	ptr = (int*) malloc(n * sizeof(int));

	if (ptr == NULL)
	{
		printf("Could not allocate memory");
		exit(0);
	}

	printf("enter the numbers: \n");
	for(i = 0 ; i < n ; ++i)
	{
		scanf("%d", ptr+i);
		sum += *(ptr+i);
	}

printf("the sum is : %d ", sum);
free(ptr);

}
