#include <stdio.h>
#include <string.h>
#include <ctype.h>

 
int main(void)
{
//string functions

    char string1[] = "Sam";
    char string2[] = "Wanyua";

    //strlwr(string1);  //converts a string to lowercase
    //strupr(string1);  //converts a string to uppercase
    //strcat(string1,string2); //appends string2 to the end of string1
    //strncat(string1, string2, 2); //appends n characters from string2 to string1
    //strcpy(string1,string2); //copies string2 to string1
    //strncpy(string1, string2, 3); //copies n characters of string2 to string1
   
    //strset(string1, 'r');  //sets all characters of a string to a given character
    //strnset(string1, 'x', 1); //sets first n characters of a string to a given character
    //strrev(string1); //reverses a string


    //int result = strlen(string1);   // returns string length as an int
    //int result = strcmp(string1, string2);  //string compares all characters
    //int result = strncmp(string1, string2, 1); //compares n characters
    //int result = strcmpi(string1, string1); //string compares all (ignore case)
    //int result = strnicmp(string1,string1,1); //string compares n characters

    printf("\n%s\n\n",string1);
    printf("\n%d\n\n",result);

    if( result == 0)
    {
        printf("This strings are the same");
    }
    else
    {
        printf("This strings are not the same\n");
    }

    return 0;
}