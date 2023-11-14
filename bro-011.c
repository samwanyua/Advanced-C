#include <stdio.h>
#include <string.h>

int main(void)
{
/* 
WHILE LOOPS
It repeats a section of the code for an unlimited times
while some condition remains true
It is possible for a while loop not to execute at all depending on the condition

*/   

    char name[25]; // 25 is bytes

    printf("\nWhat is your name? : ");
    fgets(name, 25, stdin); //fgets() for names with spaces instead of scanf()
    name[strlen(name)-1 ] = '\0'; //to get rid of new line character

    while (strlen(name)==0)
    {
        printf("You did not enter your name!");
        printf("\nWhat is your name? : ");
        fgets(name, 25, stdin); //fgets() for names with spaces instead of scanf()
        name[strlen(name)-1 ] = '\0';
    }
    


    printf("Hello %s", name);

    return 0;
}