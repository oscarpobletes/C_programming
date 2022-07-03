#include<stdio.h>
int main()
{
	int i, val;
	int sum=0;
	for(i=0;i<5;i++) //If i<=5 then it will count up to 6 times 
	{
		printf("Give me an integer\n");
		scanf("%d",&val);
		sum=sum+val;
	}
	printf("The sum of the values is: %d\n",sum);
	return 0;
}
