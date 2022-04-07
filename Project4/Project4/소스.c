//*****
//***
//*

#include <stdio.h>

int main(void) {

	for (int i = 2; i >= 0; i--) {
		for (int j = 0; j < i * 2; j++) {
			printf(" ");
		}
		for (int j = 5; j > i*2; j--) {
			printf("*");
		}
		printf("\n");
	}

	for (int idx = 3; idx > 0; idx--) {
		for (int jdx = 0; jdx < idx * 2 - 2; jdx++) {
			printf(" ");
		}
		for (int kdx = 5; kdx >= idx * 2-1; kdx--) {
			printf("*");
		}
		printf("\n");
	}
}