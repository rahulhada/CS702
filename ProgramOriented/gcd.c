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
#include"gcd.h"
int gcd_euclidean(long int a, long int b)
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
int gcd_recursive(long int a, long int b)
{
	if((a%b) == 0) return b; 
	return(gcd_recursive(b % a, a));
}
int gcd_bruteforce(long int a , long int b)
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

