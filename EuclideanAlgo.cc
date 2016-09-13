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
// This program is used to calculate GCD using Euclidean algorithm

#include <stdio.h>

int findgcd(int ,int);
int gcd(int, int);

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

	printf("User (1) Recursive algorithm or (2) Brute force algorithm? ");
	scanf("%d", &ch);

	switch(ch){
		case 1: c = gcd(a, b);
		 break;
		default: printf("Invalid input! Using brute force algorithm!\n");
		case 2: c = findgcd(a, b);
		 break;
	}
	printf("C=%d\n",c);
	return 0;
}

// recursive algo
int gcd(int a, int b){
	if(a == 0) return b;
	else gcd(b % a, a);
}

// brute force
int findgcd(int a, int b)
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
