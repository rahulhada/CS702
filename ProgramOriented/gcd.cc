#include"gcd.h"

int gcd_euclidean(int a, int b)
{
	int d,r;
	r=999;
//      start = clock();
	while (r)
	{
		r=a%b;
		a=b;
		b=r;
	}
      end = clock();
	return a;
}

