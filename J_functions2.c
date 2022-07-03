#include<stdio.h>
#include<math.h> //Needed for pow
int pot(int, int);

int main()
{
	int x;
	int y;
	int res;
	printf("Give me the first integer: ");
	scanf("%d",&x);
	printf("Give me a second integer: ");
	scanf("%d",&y);
	res=pot(x,y);
	printf("The result of %d to the %d power is: %d",x,y,res);
	return 0;
}
int pot(int n1, int n2)
{
	return pow(n1,n2); //returning values using "return"
}
	
