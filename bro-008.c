#include <stdio.h>

void hello(char[], int); //This is a function prototype


int main(void)
{

//Function prototype is a function declaration without a a body before main()
//Ensures that calls to a function are made with the correct arguments

        char name[] = "Sam";
        int age = 45;

        hello(name, age); //arguements


    return 0;
}

void hello(char name[], int age)
{
    printf("\nHello %s!", name);
    printf("\nYou are %d years old!\n", age);
}