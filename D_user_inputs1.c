#include <stdio.h>
#include <stdlib.h>
/*Asking user for an imput*/
int main() 
{
float numb1, numb2;
    printf("Hello! Today I will ask you for two numbers and after that I will add them. \nPlease enter the first number: ");
    scanf("%f",&numb1);
    printf("Great! Now please give me the second number: ");
    scanf("%f",&numb2);
    printf("Thank you. The sum of the two numbers you entered is: %.2f",numb1+numb2);
return 0;
}