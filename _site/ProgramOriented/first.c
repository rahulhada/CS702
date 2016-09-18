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
          : Nischal Bhatewara <      > 
 * Date   : 06/09/2016 
 */
/* This program is used to calculate GCD using Euclidean algorithm[Iterative] & [Recursive] , Bruteforce Algorithm
 */

/*
 * Link the header file first using the following commad
 * gcc  GCD.c CryptoFramework.c  -o test
 * ./test**/
#include<stdio.h>
#include <time.h>
#include "gcd.h"

void mDisplay(int iValue, char* iOps);
void display_CPU_Time(char* ch);
char euc[30] = "Eucledean";
char rec[30] = "Recursive";
char bru[30] = "BruteForece";

clock_t start,end;

int main()
{
	long int a,b;
	int c;
	int ch=0;
	
	printf("Enter Two numbers to calculate GCD:\n");
	printf("A = ");
	scanf("%ld",&a);
	printf("B = ");
	scanf("%ld",&b);
	
	// Check for 0
	if (a == 0 || b == 0){
		printf("Invalid inputs! Cannot have 0 as input.\n");
		return 0;
	} 

	// Check for negative
	if (a < 0) a = -a;
	if (b < 0) b = -b;

    do {
        printf("\n(1) Recursive Algorithm or (2) Euclidean Algorithm 3) Brute-force Algorithm?\n");
        printf("Option = ");
        scanf("%d", &ch);
        
        //Initializing the clock variable start
        start = clock();
        
        switch (ch) {
                
            case 2:
                //Euclidean Algorithm implementation
                mDisplay(gcd_euclidean(a, b), euc);
                break;
                
            case 1:
                //Recursive Algorithm implementation
                mDisplay(gcd_recursive(a, b), rec);
                break;
                
            case 3:
                //Brute Force Algorithm implementation
                mDisplay(gcd_bruteforce(a,b),bru);
                break;
            default:
            printf("Invalid input! Using brute force algorithm!\n");        }
    } while (ch != -1);
    
		return 0;
}


//Display the output
void mDisplay(int iValue, char* iOps) {
    printf("GCD VALUE : %d\t", iValue);
    display_CPU_Time(iOps);
}

//Returning CPU_TIME difference
void display_CPU_Time(char* ch) {
    end = clock();
    printf("%s",ch);
        printf(" CPU Time:%lf\n", ((double) (end - start)) / CLOCKS_PER_SEC);
}
