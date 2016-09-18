#include<stdio.h>
#include "exeuclidean.h"
#include "gcd.h"

int main()
{
	equation e;
	e.a=161;
	e.b=28;
	e.d=7;
	exEucliCal(&e);
	printf("x=%ld y=%ld\n",e.x ,e.y);
	return 0;
}
