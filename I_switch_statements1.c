#include<stdio.h>
int main()
{
	int nu1;
	int nu2;
	int op;
	int res;
	printf("\tOPERATIONS MENU\n1.ADD\n2.SUBSTRACT\n3.MOD\n4.EXIT\nChoose an option: ");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
		printf("First value: ");
		scanf("%d",&nu1);
		printf("Second value: ");
		scanf("%d",&nu2);
		res=nu1+nu2;
		printf("Result: %d",res);
		break;
		
		case 2:
			printf("First value: ");
		scanf("%d",&nu1);
		printf("Second value: ");
		scanf("%d",&nu2);
		res=nu1-nu2;
		printf("Result: %d",res);
		break;
		
		case 3:
		printf("First value: ");
		scanf("%d",&nu1);
		printf("Second value: ");
		scanf("%d",&nu2);
		res=nu1%nu2;
		printf("Result: %d",res);
		break;
		
		case 4:
		printf("Goodbye.");
		break;
	}
}
