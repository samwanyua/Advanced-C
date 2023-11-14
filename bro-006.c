#include <stdio.h>

double square (double x)
{
    double result = x * x;
    return result;
}

int main(void)
{
// Return statements returns a value back to a calling function

    double x = square(4.345);
    printf("%lf\n",x);



    return 0;
}