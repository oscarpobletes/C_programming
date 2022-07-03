#include<stdio.h>
/*Add the expenses that are greater than $1000 only*/
int main()
{
	float expense;
	int i=1;
	float sum;
	do
	{
		printf("\nEnter the expense No°%d: $",i);
		scanf("%f",&expense);
		printf("\nENTER 0 TO STOP THE PROGRAM");
		if(expense>=1000)
		{
			sum=sum+expense;
		}
		i++;
	} while(expense!=0);
	printf("\nThe sum of expenses greater than 1000 is: $%.2f",sum);
	return 0;
}