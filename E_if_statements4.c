#include<stdio.h>

int main(){
	float grade;
	printf("\tGRADING SYSTEM\nPlease, type your grade (0-10): ");
	scanf("%f",&grade);
	if(grade>=6 && grade<=10)
	{
	  printf("\nCONGRATULATIONS YOU PASS");
	}
	else if(grade>=0 && grade<=5)
	{
		printf("YOU FAILED");
	}
	else
	{
		printf("\nERROR! verify that you have entered your grade correctly");
	}
	return 0;
}
