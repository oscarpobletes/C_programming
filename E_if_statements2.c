#include <stdio.h>

int main(){
	int x;
	int y;
	int z;
	printf("Give me a first number:");
	scanf("%d",&x);
	printf("Give me a second number:");
	scanf("%d",&y);
	printf("Give me a third number:");
	scanf("%d",&z);
	if (x>y && x>z)
	{
		printf("%d is greater than %d and %d",x,y,z);
	}
	else if(y>x && y>z)
	{
		printf("%d is greater than %d and %d",y,x,z);
    }   
    else
	{
    	printf("%d is greater than %d and %d",z,x,y);
	}
	return 0;
}
