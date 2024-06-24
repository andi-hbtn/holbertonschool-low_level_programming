#include "main.h"
#include <stdio.h>
#include <ctype.h>
int _isdigit(int c)
{
printf("%d\n",c);
	
	if (c>= '0' && c<='9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
