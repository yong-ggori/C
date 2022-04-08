#include <stdio.h>

int main(void) {
	int num, check=1, cnt=0;
	int res[100] = { 0 };

	printf("2이상의 정수를 입력하세요 : ");
	scanf_s("%d", &num);

	for (int idx = 2; idx < num; idx++) {
		int temp = idx;
		while (1) {
			if (idx % --temp == 0 && temp >= 2) {		
				break;
			}
			else if (temp == 1) {
				res[cnt++] = idx;
				break;
			}
		}
	}
	for (int idx = 0; res[idx] != 0; idx++) {
		printf("%4d", res[idx]);
		if (check++ % 5 == 0) {
			printf("\n");
		}
	}
	return 0;
}