#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    //! NOT Logical operator reverses the state of a condition
    bool sunny = true;

    if (!sunny)
    {
        printf("\nIt is sunny outside\n");
    }
    else 
    {
        printf("\nDon't go outside!\n");
    }
    
    return 0;
}