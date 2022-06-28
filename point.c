#include <cs50.h>
#include <stdio.h>

int main(void)
{
    const int MINE = 2;
    //const is a command telling the code to have a constant value all through out the code/program
    //using of CAPITAL letters in naming a const is jsut for convention
    int points = get_int("How many points did you lose? ");

    if (points < MINE )
    {
        printf("You lost fewer points than me.\n");
    }
    else if (points > MINE )
    {
        printf("You lost more points than me.\n");
    }
    else
    {
        printf("You have lost the same number of points as me.\n");
    }

}