#include <stdio.h>

int main(){
	int x;
	int y;
	printf("Give me a number:");
	scanf("%d",&x);
	printf("Give a second number:");
	scanf("%d",&y);
	if (x>y)
	{
		printf("%d is greater than %d",x,y);
	}
	else if(x<y)
	{
		printf("%d is greater than %d",y,x);
    }   
    else
	{
    	printf("%d is equal to %d",x,y);
	}
	return 0;
}
