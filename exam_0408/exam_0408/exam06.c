#include <stdio.h>

int prime_check(int n);

int main() {
	int num, count=0;
	int prime[100] = { 0 };

	printf("# 양수 입력 : ");
	scanf_s("%d", &num);

	for (int idx = 0; idx < num; idx++) {
		prime[idx] = prime_check(idx);
	}

	for (int idx = 0; idx < num; idx++) {
		if (prime[idx] == 1) {
			printf("%3d", idx);
			count++;
			if (count % 5 == 0) {
				printf("\n");
			}
		}
	}

	return 0;
}
int prime_check(int n) {

	int idx;

	for (idx = 2; idx < n; idx++) {
		if (n % idx == 0) {
			break;
		}
	}
	if (n == idx) {
		return 1;
	}
	return 0;
}