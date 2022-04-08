#include <stdio.h>

//실행 결과
//10 20 30 40 50
//10 20 30 40 50 60 70

void print_ary(int* pa, int size);

int main() {
	int ary1[] = { 10, 20, 30, 40, 50 };
	int ary2[] = { 10, 20, 30, 40, 50, 60, 70 };

	print_ary(ary1, sizeof(ary1) / sizeof(ary1[0]));
	printf("\n");
	print_ary(ary2, sizeof(ary2) / sizeof(ary1[0]));

	return 0;
}
void print_ary(int* pa, int size) {
	for (int idx = 0; idx < size; idx++) {
		printf("%d ", *(pa+idx));
	}
}