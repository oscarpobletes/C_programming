#include<stdio.h>

int main()
{
	
float a, b, c;
 	printf (" ORGANIZE NUMBERS\nPlease, enter three numbers:\n");
 	scanf ("%f %f %f", &a, &b, &c);
 if (a>b)
 {
 if (a>c)
 {
 if (b>c)
 printf (" The order is %f, %f, %f. \n",a,b,c);
 else printf (" The order is %f, %f, %f.\n",a,c,b);
 }
 }
 else
 {
 if (b>c)
 {
 if (a>c)
 printf (" The order is %f, %f, %f.\n",b,a,c);
 else printf (" The order is %f, %f, %f.\n",b,c,a);
 }
 }
	return 0;
}
