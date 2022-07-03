#include<stdio.h>

int main()
{
	int i,j,x,y;
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=i;j++)
		printf(" * ");
		printf("\n");
	}
	for(x=5;x>=0;x--)/*i for rows*/
	{
		for(y=0;y<=x;y++)/*j for columns*/
		printf(" * ");
		printf("\n");
	}
	return 0;
}
