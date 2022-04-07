#include <stdio.h>

int main(void) {
	int* pi;
	pi = malloc(sizeof(double));

	printf("%d\n", sizeof(pi));
	free(pi);

	return 0;
}