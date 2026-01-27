#include <stdio.h>

int add_numbers(int x, int y)
{
    return x + y;
}

int main(int argc, char** argv) 
{
    /* int count = 10.5; implicit conversion
    see https://en.cppreference.com/w/c/language/conversion.html
    two stages:
    1. value transformation if applicable
    see https://en.cppreference.com/w/c/language/types.html#Compatible_types for compatible types
    ints, for example have a rank based on precision
    2. a conversion
    */
    // variables: https://www.cs.yale.edu/homes/aspnes/pinewiki/C(2f)Variables.html
    // printf("%d", add_numbers(6, 7));
    // strings are rep. by char* and are stored as a list of chars	
    
    for (int i = 0; i < 5; i++)
    {
	puts("Hello World!");
    }
    int j = 0;
    while (j < 5)
    {
	puts("Hello World 2!");	
	j++;
    }
    return 0;
}
