#include <stdlib.h>
#include <stdio.h>


int main()
{
        char str[] = {"saad;New york;20;0"};
	FILE *ptr = fopen("text.txt","w");
        char name[20] = { 0 };
        char city[20] = { 0 };
        int age;
        int hasDegree;
        printf("enter details in the following format name ; city ;  age ; degree");
	scanf("%[^;];%[^;];%u;%d",name, city, &age, &hasDegree);
        fprintf(ptr, "Name is %s ,City is %s ,Age is %d and degree %d", name, city, age, hasDegree );
        return 0;
}
