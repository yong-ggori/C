#include <stdio.h>

int main() {
	int line;
	printf("�� ��? ");
	scanf_s("%d", &line);
	printf("==============================\n");
	//����� �ﰢ�� 1
	for (int idx = 0; idx < line; idx++) {
		for (int jdx = line; jdx > idx; jdx--) {
			printf("*");
		}
		printf("\n");
	}
	printf("==============================\n");
	//����� �ﰢ�� 2
	for (int idx = 0; idx < line; idx++) {
		for (int jdx = line-1; jdx > idx; jdx--) {
			printf(" ");
		}
		for (int jdx = 0; jdx <= idx; jdx++) {
			printf("*");
		}
		printf("\n");
	}
	printf("==============================\n");
	//����� �Ƕ�̵�
	for (int idx = 0; idx < line; idx++) {
		for (int jdx = line - 1; jdx > idx; jdx--) {
			printf(" ");
		}
		for (int jdx = 0; jdx < idx * 2 + 1; jdx++) {
			printf("*");
		}
		printf("\n");
	}
}