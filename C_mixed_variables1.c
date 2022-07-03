#include<stdio.h>

int main ()
{
char name[]="Oscar"; //Undefined string
int age= 20;
    printf("My name is %s\n", name);
    printf("I'm %d years old\n", age);
    
    age=100; //Value change
    printf("I hope to make it through a %d", age);
    return 0;
}