#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> /*defines miscellaneous symbolic constants and types*/
#include <stdbool.h> /*without this it's just _Bool*/
#include <math.h> /* for math operations*/
int main()
{
/*signed<unsigned*/
/*unsigned only stores non-negative*/
/*integer data type*/
int intg= 2147483647; /*4 bytes*/
int intgn=-2147483647; /*4 bytes*/
short intg2=32767; /*2 bytes*/
short intg2n=-32767; /*2 bytes*/
long  intg3=922337203685477580; /*8 bytes*/ /*shows warning because of the size, fixes with long long*/
long  intg3n=-922337203685477580; /*8 bytes*/ /*shows warning because of the size, fixes with long long*/
/* real data type*/
double real=1.79769313486231570; /*e+308 for positives*/ /*8 bytes*/
double realn= -4.94065645841246533; /*e-324 for non-positives*/ /*8 bytes*/
float real2=3.40282347; /*e+38 for positives*//*4 bytes*/
float real2n=-1.4023984; /*e-45 for non positives*/ /*4 bytes*/
/* string data type*/
/*1 byte per character*/
char name[]="Oscar";
char name_initial='O';

/* boolean data type*/
bool f=false; /*1 byte, value can be 0*/
bool t=true; /*1 byte, value can be 1*/

/*Some operations*/
printf("Some math operations:");
printf("\n------------------");
printf("\n\nsum of two integers: %d", 7+7);
printf("\nmultiplication of two fractions: %.4f", .25*.25);
printf("\nsubstraction of two fractions: %.2f", .75-.25);
printf("\ndivision of two integers: %d", intg2/intg2n);
printf("\nmodulus of two integers: %d", 20%3);
/*Some functions*/
printf("\n\nSome math functions:");
printf("\n------------------");
printf("\n\npower of two integers: %.f", pow(2,3) ); /*power*/
printf("\nfloor: %.2f", floor(77.77) ); /*floor*/
printf("\nceiling: %.2f", ceil(77.77) ); /*ceiling*/
printf("\nsquare root: %.9lf", sqrt(2) ); /*square root or ^1/2*/ /*lf for double*/
printf("\nround: %.f", round(79.77) ); /*floor*/
printf("\ntrunc: %.2f", trunc(77.77) ); /*trunc*/
printf("\nsine: %.f", sin(1.57) ); /*originally in radians*/
printf("\ncosine: %.f", cos(1.57) ); /*originally in radians*/
printf("\ntangent: %f", tan(1.57) ); /*1.57*/
printf("\neuler exponent: %.5f", exp(1) ); /*e^x*/
printf("\nlogarithm: %.f", log10(100) ); /*log 10th base*/
printf("\nabsolute: %d", abs(-5) ); /*abs*/
return 0;
}
