/*
ref: https://gcc.gnu.org/onlinedocs/cpp/Macros.html
C preprocessor replaces the contents of the macro with its contents.
ref: https://pubs.opengroup.org/onlinepubs/7908799/xsh/stdio.h.html
<stdio.h> header defines certain macro names as positive integral constant
expressions. 
ref : https://learn.microsoft.com/en-us/cpp/c-language/c-constant-expressions?
view=msvc-170
Constant expressions are evaluated at compile time and are evaluated as a 
constant. 
*/

#include <stdio.h>


/* 
ref: https://stackoverflow.com/questions/3024197/what-does-int-argc-char-
argv-mean
argc and argv are how command line args are passed to main()
agrc: number of strings pointed to by argv. 1 + number of args (name prepend)
*/ 
int main(int argc, char** argv) 
{
	// printf("%d", argc);	prints out 1 (no args, just program name) 
	puts("Hello World!");
	return 0;				// indicates no errors
}
