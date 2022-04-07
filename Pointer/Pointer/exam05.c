#include <stdio.h>

void swap(int* , int* );

int main(void) {
	int a = 10, b = 20;

	swap(&a, &b);
	printf("a : %d, b : %d\n", a, b);

	return 0;
}

void swap(int* x, int* y) { // x == &a, y == &b
	int temp;

	temp = *x; //*x == a
	*x = *y; //*y == b
	*y = temp;
}