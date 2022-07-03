#include<stdio.h>

int main()
{
	int val;
	int i=0;
	int sum=0;
	while(val !=999)
	{
		printf("Give me an integer: \n");
		scanf("%d",&val);
		if(val!=999) // Doesn't count the 999
		{
			sum=sum+val;
			i++;
		}
	}
	printf("The sum of the values is: %d\n",sum);
	printf("The number of the values given by the user is: %d\n",i);
	return 0;
}
