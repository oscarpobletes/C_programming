#include <stdio.h>

int main()
{
    int a, b, c;
 
    printf("TRIANGLE IDENTIFIER\nEnter the length of the first side: "); 
	scanf("%d",&a);
    printf("\nEnter the length of the second side: ");
    scanf("%d",&b);
    printf("\nEnter the length of the third side: ");
    scanf("%d",&c);
    if (a == b && b== c)
        printf("\nIt is an equilateral triangle");
    else if (a == b || a == c || b == c)
        printf("\nIt is an isosceles triangle");
    else
        printf("\nIt is a scalene triangle");
 
    return 0;
}
