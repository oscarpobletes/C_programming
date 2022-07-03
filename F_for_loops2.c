#include<stdio.h>
int main()
{
	int i, val;
	int sum=0;
	for(i=0;i<5;i++)
	{
		printf("Give me an integer\n");
		scanf("%d",&val);
		if(val%2==0) //It only adds those who are pairs
		{
			sum=sum+val;
		}
	}
	printf("The sum is: %d\n",sum);
	return 0;
}
