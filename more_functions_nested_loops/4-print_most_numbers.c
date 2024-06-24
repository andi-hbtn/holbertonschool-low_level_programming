#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - print numbers frm 0 to 9 do not include 2 and 4
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++){
        if(i != 2 && i != 4){
		    printf("%d number is \n", i);
        }
    }	
    _putchar('\n');
}