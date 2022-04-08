#include <stdio.h>

int main() {
	char animal[5][20];
	int i;
	int count;

	count = sizeof(animal) / sizeof(animal[0]); //행의 수 계산 = 20
	for (i = 0; i < count; i++) {
		//gets(animal[i]);
		scanf("%s", animal[i]);
	}
	for (i = 0; i < count; i++) {
		printf("%p\t%3s\n", animal[i],animal[i]);//주소와 해당 요소 출력
	}

	return 0;
}