#include <stdio.h>

int main(void)
{
/*
WHILE LOOPS = Checks a condition then execute the block of code if the condition is true
DO WHILE LOOPS = always execute a block of code once then checks a condition

*/

    int number = 0;
    int sum = 0;

   
    do{
        printf("\nEnter a number above 0: ");
        scanf("%d",&number);

        if (number > 0)
        {
            sum +=number;
        }
    }while (number > 0);

     
    
    printf("Sum: %d\n",sum);
    return 0;
}