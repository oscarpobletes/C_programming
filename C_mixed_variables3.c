#include <stdio.h>
#include<stdlib.h>
#define pi 3.1416 /*Another way of declaring constants*/
#define sum(x,y) x+y /*Using macro as a function with #define*/
/*learning constants*/
int main()
{
    int age=20;
    const int CYEAR=2020;/*the uppercase name it's just a good practice for identifying constants*/
        printf("DATE: %s",__DATE__);
        printf("\nTIME: %s",__TIME__);
        printf("\n\nOver time my age can change. Right now I'm %d years old.",age);
    age=21;
        printf("\n\tBut next year I'll be %d.",age);
        printf("\nWhat doesn't change is the year I wrote this: %d.",CYEAR);
        printf("\n\tNow I'll print the constant pi I declared previously with #define: %.4f",pi);
        printf("\nFinally it's time for printing the macro I used as a function with #define also: %d is the result of the sum of %d and %d ", sum(4,3),4,3);
    return 0;
}