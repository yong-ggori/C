#include <stdio.h>

int main() {
	char animal[5][20];
	int i;
	int count;

	count = sizeof(animal) / sizeof(animal[0]); //���� �� ��� = 20
	for (i = 0; i < count; i++) {
		//gets(animal[i]);
		scanf("%s", animal[i]);
	}
	for (i = 0; i < count; i++) {
		printf("%p\t%3s\n", animal[i],animal[i]);//�ּҿ� �ش� ��� ���
	}

	return 0;
}