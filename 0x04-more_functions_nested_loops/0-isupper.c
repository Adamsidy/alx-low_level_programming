#include "main.h"
/**
 *_isupper - function that checks for uppercase character
 *
 * @c: character to be checked
 *
 * Return:: 1 if character is uppercase,
 * otherwise 0
 */
int main(void)
{
	    char c;

	        c = 'A';
		    printf("%c: %d\n", c, _isupper(c));
		        c = 'a';
			    printf("%c: %d\n", c, _isupper(c));
			        return (0);
}
