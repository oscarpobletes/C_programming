//by Óscar Poblete Sáenz
//Read an integer, n
//If n is pair, n=n/2
//If n is odd, n=3n+1
//Repetir paso 2 y 3 hasta que n sea 1
#include<stdio.h>
int main(){
  int n;
  printf("Give me a number: ");
  scanf("%d",&n);
  while(n > 1){
    if(n % 2 == 0){ //for pairs
      n = n / 2;
      printf("%d\n", n);
    }
    else{ //for odds
      n = n * 3 + 1;
      printf("%d\n", n);
    }
  }
  return 0;
}
