#include <stdio.h>


int findMax(int x, int y)
{
   /* if( x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
    */
   return (x > y) ? x : y;
}

int main(void)
{
//tenary operators = shortcut to using if/else when assigning or returning  a value
// (condition) ? value if true : value if false

     int max = findMax(37,4);
     printf("%d\n", max);



    return 0;
}