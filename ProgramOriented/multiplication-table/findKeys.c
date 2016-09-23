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