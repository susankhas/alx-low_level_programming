#include <stdio.h>
#include <unistd.h>

/**
*main -prints exacly and what piece of art is useful
*
*Return: Always 0 (Success)
*/
int main(void)
{
	write(2, "and the piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
