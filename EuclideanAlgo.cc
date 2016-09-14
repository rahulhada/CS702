/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *
 * Author : Rahul Hada <hada.rahul@gmail.com>
 * Date   : 06/09/2016 
 */
/* This program is used to calculate GCD using Euclidean algorithm
 * In this nischal bhatewara <      > added  bruteforce and recursive approach/functionality and we can also calculate the
 * CPU time for the each of these approaches.
 * 
 */ 

#include <stdio.h>
#include <time.h>
int gcd_recursive(int ,int);
int gcd_euclidean(int ,int);
int gcd_bruteforce(int ,int);
int gcd(int, int);
void display_CPU_Time();
clock_t start,end;
double cpu_time_usedR,cpu_time_usedB;
int main()
{
	int a,b,c;
	int ch;
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
		case 1: c = gcd_recursive(a, b);
		 break;
		case 2: c = gcd_euclidean(a, b);
		break;
		case 3:
		//	c= gcd_bruteforce(a,b);
		break;
		default: printf("Invalid input! Using brute force algorithm!\n");
		exit(0);
	}
	printf("C=%d\n",c);
      display_CPU_Time();
	return 0;
}

void display_CPU_Time()
{
      printf("Recursive CPU Time:%lf",((double) (end - start)) / CLOCKS_PER_SEC);
}
// Recursive Algorithm
int gcd_recursive(int a, int b)
{
      start = clock();
	if(a == 0) return b;
	else gcd(b % a, a);
      end = clock();
}

// Euclidean Algorithm 
int gcd_euclidean(int a, int b)
{

	int d,r;
	r=999;
      start = clock();
	while (r)
	{
		r=a%b;
		a=b;
		b=r;
	}
      end = clock();
	return a;
}
	
