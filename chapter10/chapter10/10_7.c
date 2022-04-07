#include <stdio.h>

void input_ary(double* pa, int size);
double find_max(double* pa, int size);

int main(void) {
	double ary[5];
	double max;
	int size = sizeof(ary) / sizeof(ary[0]);

	input_ary(ary, size);
	max = find_max(ary, size);
	printf("�迭�� �ִ� : %.1f\n", max);

	return 0;
}

void input_ary(double* pa, int size) {
	int idx;

	printf("%d���� �Ǽ��� �Է� : ", size);
	for (idx = 0; idx < size; idx++) {
		scanf_s("%lf", pa + idx);
	}
}

double find_max(double* pa, int size) {
	double max;
	int idx;

	max = pa[0];
	for (idx = 0; idx < size; idx++) {
		if (pa[idx] > max) max = pa[idx];
	}

	return max;
}
