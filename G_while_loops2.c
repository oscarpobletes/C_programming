#include<stdio.h>
int main(){
    /*Add two when numbers from 2 to 1800 are pairs. If the numbers are not pairs then add three*/
	int i=1, n=2, sum=0;
	while(n <= 1800){
 
		printf("%d ", n);
		sum += n;
 
		if(i % 2 == 0){
			n += 2;
		}
		else{
			n += 3;
		}
		i++;
	}
 
	printf("\n\nThe sum is: %d \n", sum);
 
	return 0;
}
