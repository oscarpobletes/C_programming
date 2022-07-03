#include <stdio.h>
#include <stdlib.h>
/*Asking user for an imput*/
int main() 
{
char item[10]; //Number of characters permitted
char store[20];
int price;
    printf("Give me the name of the store (Maximum 20 characters, two words): ");
    fgets(store,20,stdin); // fgets reads a line from the specified stream and stores it into the string pointed to by str.
    printf("Now please give me the name of the item (Maximum 10 characters, one word): ");
    scanf("%s", item); //another way but only supports one word
    printf("Give me the price of the item: $");
    scanf("%d",&price);
    printf("STORE: %sITEM: %s \nPRICE: $%d",store,item,price); /*Item does not have \n because fgets makes an extra line after the printed value*/

return 0;
}