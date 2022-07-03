#include <stdio.h>
#include <stdlib.h>
/*Madlibs game*/
int main() {
char color[20];
char pluralnoun[20];
char celebrityF[20];
char celebrityL[20];
/*Another way of scaning and printing a character string of more than one word without fgets*/
    printf("Enter a color: ");
    scanf("%s",color);
    printf("Enter a plural noun: ");
    scanf("%s",pluralnoun);
    printf("Enter a celebrity: ");
    scanf("%s%s",celebrityF,celebrityL);

    printf("\nRoses are %s\n",color);
    printf("%s are blue\n",pluralnoun);
    printf("I love %s %s",celebrityF,celebrityL);

return 0;
}