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
 */
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
