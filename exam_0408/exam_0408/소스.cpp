#include <stdio.h>

int main() {

	for (int idx = 0; idx < 3; idx++) {
		for (int jdx = 4; jdx > idx * 2; jdx--) {
			printf(" ");
		}
		for (int jdx = 0; jdx < idx * 2 + 1; jdx++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}