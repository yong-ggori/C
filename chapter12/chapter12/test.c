#include <stdio.h>

void str_print(char* m_str) {
	int cnt = 0;
	char s1[5];
	while (*m_str != '\0') {
		s1[cnt] = *m_str;
		cnt++;
		m_str++;
	}
	s1[cnt] = '\0';
	printf("배열 문자열 변환 : %s\n", s1);
}

int main() {
	char str[] = "test";

	str_print(str);

	return 0;
}