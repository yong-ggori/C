#include <stdio.h>

int main() {
	int a = 10;
	int* pi = NULL;
	int** ppi;
	pi = &a;
	ppi = &pi;

	printf("--------------------------------------------\n");
	printf("����\t������\t   &����     *����    **����\n");
	printf("--------------------------------------------\n");
	printf("  a%10d%10u\n", a, &a);
	printf(" pi%10u%10u%10d\n", pi, &pi, *pi);
	printf("ppi%10u%10u%10u%10u\n", ppi, &ppi, *ppi, **ppi);
	printf("--------------------------------------------\n");

}