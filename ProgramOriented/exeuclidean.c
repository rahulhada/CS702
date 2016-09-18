#include <stdio.h>
#include "gcd.h"
#include "exeuclidean.h"
void exEucliCal(equation *eq)
{
	printf("Check-1\n");
	long int x1,x2,y1,y2;
	long int q,r;
	long int a,b,d;
	a=eq->a;
	b=eq->b;	
	d=eq->d;
	if(b==0)
	{
		printf("Check-2\n");
		eq->d=a;
		eq->x=1;
		eq->y=0;
	}
	x2=1;
	x1=0;
	y2=0;
	y1=1;
	while(b>0)
	{
		printf("Check-3\n");
		q=(a)/(b);
		r=(a)-q*b;
		eq->x=x2-q*x1;
		eq->y=y2-q*y1;
		a=b;
		b=r;
		x2=x1;
		x1=eq->x;
		y2=y1;
		y1=eq->y;
	}
	eq->d=a;
	eq->x=x2;
	eq->y=y2;		
	printf("Check-4\n");
}
