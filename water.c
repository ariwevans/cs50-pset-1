#inlcude <stdio.h>
#include <cs50.h>

int main(void)
{
	printf("Minutes: ");
	int minutes = get_int();
	printf("Bottles: %d", minutes*12);
}
	
	
