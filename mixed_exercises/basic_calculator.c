//by Óscar Poblete Sáenz
#include<stdio.h>
float addi(float, float);
float subs(float, float);
float multi(float,float);
float divi(float, float);
int main()
{
	printf("\tOPERATIONS MENU");
	float nu1;
	float nu2;
	int op;
	do{
		printf("\n\n1.ADDITION\n2.SUBSTRACTION\n3.MULTIPLICATION\n4.DIVISION\n5.EXIT");
		printf("\nOPTION: ");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
			printf("The sum is: %.2f",addi(nu1,nu2));
			break;
			
			case 2:
			printf("The result of the substraction is: %.2f",subs(nu1,nu2));
			break;
			
			case 3:
			printf("The result of the multiplication is: %.2f",multi(nu1,nu2));
			break;
			
			case 4:
			printf("The result of the division is: %.2f",divi(nu1,nu2));
			break;
			
			case 5:
			printf("Bye!");
			default:
			printf("Please enter a valid option.");
	 }		
	} while(op!=5);
	return 0;
}
float addi(float x, float y)
{
			printf("You chose addition\n ");
			printf("Give me a number: ");
			scanf("%f",&x);
			printf("Give me a second number: ");
			scanf("%f",&y);
			return x+y;
}
float subs(float xx, float yy)
{
			printf("You chose substraction\n ");
			printf("Give me a number: ");
			scanf("%f",&xx);
			printf("Give me a second number: ");
			scanf("%f",&yy);
			return xx-yy;
}
float multi(float ex,float ye)
{
			printf("You chose multiplication\n ");
			printf("Give me a number: ");
			scanf("%f",&ex);
			printf("Give me a second number: ");
			scanf("%f",&ye);
			return ex*ye;
}

float divi(float u, float d)
{
			printf("You chose division\n ");
			printf("Give me a number: ");
			scanf("%f",&u);
			printf("Give me a second number: ");
			scanf("%f",&d);
			return u/d;
}
