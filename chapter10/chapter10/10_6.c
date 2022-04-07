#include <stdio.h>

void print_ary(int* pa, int size);

int main(void) {
	int ary1[] = { 10,20,30,40,50 };
	int ary2[] = { 10,20,30,40,50,60,70 };
	
	print_ary(ary1, sizeof(ary1) / sizeof(int));
	printf("\n");
	print_ary(ary2, sizeof(ary2) / sizeof(int));

	return 0;
}

void print_ary(int* pa, int size) {
	int idx;

	for (idx = 0; idx < size; idx++) {
		printf("%d ", pa[idx]);
	}
}