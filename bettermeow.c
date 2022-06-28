#include <stdio.h>

void meow(int n);
//this is to declare MEOW function anywhere in the code

int main (void)
{
    meow(3);
}

void meow(int n)
{
    for (int i = 0 ; i < n ; i++)
    {
        printf("meow\n");
    }
}

