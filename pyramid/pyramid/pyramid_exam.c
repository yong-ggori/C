#include <stdio.h>

int main() {
	int line;
	printf("¸î ÁÙ? ");
	scanf_s("%d", &line);
	printf("==============================\n");
	//º°Âï±â »ï°¢Çü 1
	for (int idx = 0; idx < line; idx++) {
		for (int jdx = line; jdx > idx; jdx--) {
			printf("*");
		}
		printf("\n");
	}
	printf("==============================\n");
	//º°Âï±â »ï°¢Çü 2
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
	//º°Âï±â ÇÇ¶ó¹Ìµå
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