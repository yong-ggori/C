#include <stdio.h>

void input_nums(int* lotto_nums);
void print_nums(int* lotto_nums);

int main(void) {
	int lotto_nums[6];

	input_nums(lotto_nums);
	print_nums(lotto_nums);
	return 0;
}

void input_nums(int* lotto_nums) {
	for (int idx = 0; idx < 6; idx++) {
		printf("번호 입력 : ");
		scanf_s("%d", lotto_nums + idx);
		for (int jdx = 0; jdx < idx; jdx++) {
			if (*(lotto_nums + idx) == *(lotto_nums + jdx)) {
				printf("같은 번호가 있습니다 !\n");
				*(lotto_nums + idx) = 0;
				idx--;
			}
		}
	}
}

void print_nums(int* lotto_nums) {
	printf("로또 번호 : ");
	for (int idx = 0; idx < 6; idx++)
		printf("%d ", *(lotto_nums+idx));
	printf("\n");
}
