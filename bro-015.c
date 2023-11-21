/*Measuring Pacific Sea*/

#include "bro-014.c"

int main(void)
{
    const int pacific_sea = AREA;
    double acres, sq_miles, sq_feet, sq_inches;

    printf("\nThe pacific sea covers an area");
    printf("of %d square kilometers\n", pacific_sea);
    sq_miles = SQ_MILES_PER_SQ_KILOMETER * pacific_sea;
    sq_feet = SQ_FEET_PER_SQ_MILE * sq_miles;
    sq_inches = SQ_INCHES_PER_SQ_FOOT * sq_feet;
    acres = ACRES_PER_SQUARE_MILE * sq_miles;

    printf("In other units of measure this in: \n\n");
    printf("%22.7e acres\n", acres);
    printf("%22.7e square miles\n", sq_miles);
    printf("%22.7e square feet\n", sq_feet);
    printf("%22.7e square inches\n", sq_inches);




    return 0;
}