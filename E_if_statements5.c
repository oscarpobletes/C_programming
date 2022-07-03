#include<stdio.h>

int main()
{
	float nu;
	printf("\tPOSITIVE OR NEGATIVE\nEnter a number: ");
	scanf("%f",&nu);
	if(nu>=0 || nu<=0)
	{
	if(nu>=0)
	{
		printf("\nPOSITIVE NUMBER");
	}
	else
	{
		printf("\nNEGATIVE NUMBER");
	}
	}
	else
	{
		printf("ERROR!");
	}
	return 0;
}
