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
          : Nischal M <nischal.bhatewara@gmail.com> 
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
#include <stdlib.h> // for strtol
#include "gcd.h"

void mDisplay(int iValue, char* iOps);
void display_CPU_Time(char* ch);

clock_t start,end;

int main();

void autoRun(long int, long int);
double getTime(clock_t, clock_t);
// global variables
clock_t start,end;

int main(int argc, char const *argv[])
{

	// check for given args
	if(argc > 0){
	    if(argc == 3){
            autoRun((long int) strtol(argv[1], NULL, 10) // A
                , (long int) strtol(argv[2], NULL, 10) // B
                );
            return 0;
		}else{
		    autoRunTest((long int) strtol(argv[1], NULL, 10) // A
                            , (long int) strtol(argv[2], NULL, 10) // B
                            );
                        return 0;
		}
	}

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
        printf("\n(-1) Exit || (1) Recursive Algorithm || (2) Euclidean Algorithm || 3) Brute-force Algorithm?\n");
        printf("Option = ");
        scanf("%d", &ch);
        
        //Initializing the clock variable start
        start = clock();
        
        switch (ch) {

            case 1:
                //Recursive Algorithm implementation
                mDisplay(gcd_recursive(a, b), "Recursive");
                break;
            case 2:
                //Euclidean Algorithm implementation
                mDisplay(gcd_euclidean(a, b),"Eucledean");
                break;
                
            case 3:
                //Brute Force Algorithm implementation
                mDisplay(gcd_bruteforce(a,b),"BruteForece");
                break;
            default:
                if (ch!=-1) {
                    printf("Invalid input!\n");
                }
        }
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
    printf("%s CPU Time:%lf\n",ch, getTime(start,end));
}

double getTime(clock_t start, clock_t end){
	return ((double) (end - start)) / CLOCKS_PER_SEC;
}

void autoRun(long int a, long int b){

	long int c;
	// open file to write output
    FILE *fptr;
    fptr = fopen("values.txt","a");
    if(fptr == NULL){
       printf("File Error!");
       exit(1);
    }

	printf("Running for %ld and %ld\n", a, b);
	fprintf(fptr, "\nA:%ld\tB:%ld\tGCD:%d", a, b, gcd_euclidean(a, b));

   	// recursive
    start = clock();
    c = gcd_recursive(a, b);
    end = clock();
   	fprintf(fptr, "\nRecursive: %lf", getTime(start, end));

   	// euclidean
    start = clock();
    c = gcd_euclidean(a, b);
    end = clock();
   	fprintf(fptr, "\nEuclidean: %lf", getTime(start, end));

	// brute force
    start = clock();
    c = gcd_bruteforce(a, b);
    end = clock();
   	fprintf(fptr, "\nBruteforce: %lf", getTime(start, end));

	fprintf(fptr, "\n\n"); // keep file legible

    fclose(fptr);


}

void autoRunTest(long int a. long int b){
    int i=0;
    printf("For the number A = %ld & B = %ld",a,b);
       for(i=0;i<3;i++){
            start = clock();
            switch (i+1) {

                case 1:
                    //Recursive Algorithm implementation
                    mDisplay(gcd_recursive(a, b), "Recursive");
                    break;
                case 2:
                    //Euclidean Algorithm implementation
                    mDisplay(gcd_euclidean(a, b),"Eucledean");
                    break;

                case 3:
                    //Brute Force Algorithm implementation
                    mDisplay(gcd_bruteforce(a,b),"BruteForece");
                    break;

            }
        }
}
