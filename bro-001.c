/*C and Logical operators*/
#include <stdio.h>
#include <stdbool.h> //TO work with Booleans


int main(void)
{
// Logical operators - && (and) checks if two conditions are true
float temp = 20;
bool sunny = true;


if(temp >= 0 && temp <=30 && sunny)
{
    printf("\nThe weather is good!\n");
}

else 
{
    printf("\n The weather is bad!\n");
}



    return 0;
}