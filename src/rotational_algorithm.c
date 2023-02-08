/*
 * 
 * Author: Ted Jerin 
 * Description: Rotate a value to a given degree 
 * 
 * */ 

#include <stdio.h> 

void rotate( char* secret_message, int degree, unsigned int buffer_size ); 
unsigned int get_buffer_size(unsigned int array_size);

int main () {

	
	char message[] = "9865553502"; 
	
	//printf("%i\n", sizeof(message));
	
	rotate(message, 4, get_buffer_size(sizeof(message)));
	return 0;
}

void rotate ( char* secret_message, int degree, unsigned int buffer_size ) 
{
	int ceil = buffer_size;
	
	for ( int i = 0; i < ceil; i++ )
	{
		if ( *(secret_message+i) >= '6' ) {
			printf("%c\n", *(secret_message+i));
		}
		printf("%c\n", *(secret_message+i)+degree);
	}
}

__attribute((always_inline)) unsigned int get_buffer_size ( unsigned int array_size ) { 
	return (array_size - 1);
}
