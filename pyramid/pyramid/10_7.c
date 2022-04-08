#include <stdio.h>
//3.4 0.5 1.7 5.2 2.0
//최대값 : 5.2
double find_max(double* pa, int size);

int main() {
	double ary[5] = { 3.4, 0.6, 1.7, 5.2, 2.0 };
	double max;
	int size = sizeof(ary) / sizeof(ary[0]);

	max = find_max(ary, size);
	printf("최대값 : %.1lf\n", max);

	return 0;
}
double find_max(double* pa, int size) {
	double max = pa[0];

	for (int idx = 0; idx < size; idx++) {
		if (max <= *(pa + idx)) {
			max = *(pa + idx);
		}
	}

	return max;
}