#include"gcd.h"
int gcd_euclidean(int a, int b)
{
	int d,r;
	r=999;
	while (r)
	{
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
int gcd_recursive(int a, int b)
{
	if((a%b) == 0) 
		return b;
	else 
	return(gcd_recursive(b % a, a));
}
int gcd_bruteforce(int a , int b)
{
	int gcd,i;
	gcd=1;
	i=1;
	while(i<=b)
	{
		if(a%i==0 && b%i==0)
		gcd=i;
		i++;
	}
return gcd;
}

