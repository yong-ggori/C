#include <stdio.h>

int main(void) {
	char str[80];

	printf("문자열 입력 : ");
	scanf_s("%s", str);
	printf("첫 번째 단어 : % s\n", str);
	gets(str);
	printf("버퍼에 남아 있는 두 번째 단어 : %s\n", str);

	return 0;
}