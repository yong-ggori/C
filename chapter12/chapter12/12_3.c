#include <stdio.h>

int main(void) {
	char str[80];

	printf("���ڿ� �Է� : ");
	scanf_s("%s", str);
	printf("ù ��° �ܾ� : % s\n", str);
	gets(str);
	printf("���ۿ� ���� �ִ� �� ��° �ܾ� : %s\n", str);

	return 0;
}