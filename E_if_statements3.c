#include <stdio.h>

int main(){
	int salary;
	int age;
	printf("\tCARD ASSIGNMENT\nType your salary: $");
	scanf("%d",&salary);
	printf("Type your age: ");
	scanf("%d",&age);
	if(salary>=1000)
	{
		if (age>30)
		{
			printf("\nYou have the right to a GOLD card");
		}
		else if (age>=25 && age<=30)
		{
			printf("\nYou have the right to a PLATINUM card");
		}
		else{
			printf("\nYou do not apply for any card\nReason: insufficient age");
		}
	}
	else
	{
		printf("\nYou do not apply for any card\nReason: insufficient funds");
	}
	return 0;
}
