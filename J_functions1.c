#include<stdio.h>
/*A function can also be referred as a method or a sub-routine or a procedure, etc.*/
float avg(float,float);
/*function prototype*/
int main()
{

	float x,y,average;
	x=10;
	y=20;
	average=avg(x,y); /*we call the avg function*/
	printf("The average is %f\n",average);
	return 0;
}
/*Definition of the function*/
float avg(float num1,float num2)
{
	float res;
	res=num1+num2;
	res=res/2;
	/*the function returns the value of res*/
}