#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user to agree
    char c = get_char("Do you agree? ");

    //Check wether user agreed
    if ( c == 'y' || c == 'Y')
    //the 2 vertical lines || is a symbol/command to use OR
    //two && also means AND , thus having 2 conditions to be fulfilled
    //single quotation marks are also used for singe characters
    {
        printf("Agreed.\n");
    }
    else if ( c == 'n' || c == 'N')
    {
        prinf ("Not agreed.\n");
    }

}