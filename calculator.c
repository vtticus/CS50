#include <cs50.h>
#include <stdio.h>

int main(void)
{
//this code is only good for integers but not for BIG numbers
    //int x = get_int("x: ");
    //int y = get_int("y: ");
    //printf("%i\n", x + y);

//next code may be better especially it handles long integers or BIG numbers in laymans terms
    long x = get_long("x: ");
    long y = get_long("y: ");
    printf("%li\n", x + y);

}