#include<stdio.h>
#include <time.h>
#include "gcd.h"
int main()
{
	int a,b,c;
	int ch;
	clock_t start,end;
	printf("Enter Two numbers to calculate GCD:\n");
	printf("A=");
	scanf("%d",&a);
	printf("B=");
	scanf("%d",&b);
	
	// Check for 0
	if (a == 0 || b == 0){
		printf("Invalid inputs! Cannot have 0 as input.\n");
		return 0;
	} 

	// Check for negative
	if (a < 0) a = -a;
	if (b < 0) b = -b;

	printf("User (1) Recursive Algorithm or (2) Euclidean Algorithm 3) Brute-force Algorithm? ");
	scanf("%d", &ch);
	switch(ch){
		case 1: 
			printf("Recursive Approach\n");
			start=clock();
			c = gcd_recursive(a, b);
			end=clock();
		      break;
		case 2:
			printf("Euclidean Approach using Iteration\n");
			start=clock(); 
			c = gcd_euclidean(a, b);
			end=clock();
			break;
		case 3:
			printf("Euclidean Approach using Recursion\n");
			start=clock();
			c= gcd_bruteforce(a,b);
			end=clock();
			break;
		default: 
			printf("Invalid input! Using brute force algorithm!\n");
	}
	printf("GCD=%d\n",c);
	printf("CPU Time:%lf\n",((double) (end - start)) / CLOCKS_PER_SEC);
	return 0;
}
