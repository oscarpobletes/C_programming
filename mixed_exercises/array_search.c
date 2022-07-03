//by Óscar Poblete Sáenz
#include<stdio.h>
int main()
{
	int i,data[]={7,2,19,34,29,1,4,14,37,27,16,23,9,10,3}; //array variables
	int search,spot;//search variables
	int flag;//status variables 
	printf("Give me a number to find in the array: "); 
	scanf("%d",&search);
	for(i=0;i<15;i++) 
	{
		if(search==data[i])
		{
			flag=1;
			spot=i+1;
		}
	}
	if (flag==1)
	{
		printf("Found on the spot number: %d",spot);
	}
	else
	{
		printf("Not found");
	}
	return 0;
}
