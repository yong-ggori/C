#include <stdio.h>

double find_max(double* pa, int size);

int main() {
	double ary[] = { 2.5, 3.1, 5.5, 7.1, 4.6, 9.9, 1.5 };
	int size = sizeof(ary) / sizeof(ary[0]);
	double max = find_max(ary, size);

	printf("�迭�� �ִ밪 : %.1lf\n", max);

	return 0;
}
double find_max(double* pa, int size) {
	double max = *pa;

	for (int idx = 0; idx < size; idx++) {
		if (max < *(pa + idx)) {
			max = *(pa + idx);
		}
	}

	return max;
}