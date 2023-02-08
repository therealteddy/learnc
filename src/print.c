/*
 * Author: Ted Jerin 
 * Description: Print stuff to the terminal!
 * */

#include <stdio.h> 
#include <errno.h>

#define CHAR_NEW_LINE 0x0A


__attribute((always_inline)) inline char print( char * static_text ) {
	printf(static_text);
	putchar(CHAR_NEW_LINE);
	return (char) static_text;  
}

int main ( int argc, char *argv[] ) 
{
	if (argc != 2) {
		printf("%i\n", errno); 
		return -1; 
	}
	
	print(argv[1]);

	return 0; 
}
