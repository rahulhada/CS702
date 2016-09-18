#ifndef EXEUCLIDEAN
#define EXEUCLIDEAN
typedef struct expression
{
	long int x,y;
	long int a,b;
	long int d;
}equation;
void exEucliCal(equation *);
int checkGCD(int a , int b);
#endif
