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
 * Author : Nischal M <nischal.bhatewara@gmail.com> 
 * Date   : 06/09/2016 
 */


/* Program to find multiplicative inverse of a value for specific Z value */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	unsigned long long int Z, i, j;
	unsigned long long int *mat;
	unsigned long long int keyCount = 0;

	if (argc == 2)
		Z = strtoull(argv[1], NULL, 10);
	else {
		printf("\nZ: ");
		scanf("%llu", &Z);
	}

	printf("For Z = %llu\n", Z);

	mat = (unsigned long long int *) malloc(Z * Z * sizeof(unsigned long long int));

	for (i = 0; i < Z; ++i)
		for (j = 0; j < Z; ++j) {
			unsigned long long int temp = (i * j) % Z;
			*(mat + i * Z + j) = temp;
			if (temp == 1) {
				//printf("\nKey found: {%llu, %llu}", i, j);
				++keyCount;
			}
		}

	printf("\nTotal keyCount for %llu: %llu\n\n", Z, keyCount);

	/* Print the table. Not recommended for large values of Z. Use only for debug
	for (i = 0; i < Z; ++i){
		for (j = 0; j < Z; ++j)
			printf("%lu\t", *(mat + i * Z + j));
		printf("\n");
	}*/

	free(mat);

	return 0;
}