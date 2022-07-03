#include<stdio.h>
int main()
{
	int i,j,val[6];
	for(i=0;i<6;i++) //ASKS
	{ 
	printf("Give me a number: ");
	scanf("%d",&val[i]);
    }
    printf("\n");
    
	for(i=0;i<6;i++) //PRINTS
    
	printf("%d, ",val[i]);
	return 0;
    
}
