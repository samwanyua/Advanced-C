#include <stdio.h>

void birthday(char name[], int age) //these are parameters
{
   printf("\nHappy birthday dear %s!", name);
   printf("\nYou are %d years old!\n\n",age);
   
}


int main(void)
{
//arguements and parameters
    char name[] = "Sam";
    int age = 32;
    
    birthday(name, age); //these are arguments

    return 0;
}