#include <stdio.h>

int main(void) {
	int a;
	double b;
	char c;

	int* i_ptr = &a;
	double* d_ptr = &b;
	char* c_ptr = &c;

	printf("int�� ������ �ּ� : %x, %x\n", &a, i_ptr); //&a �� ���� �����ͺ����� a_ptr�� ������ �ּҰ��� ����.
	printf("double�� ������ �ּ� : %x, %x\n", &b, d_ptr);//������ &a_ptr ���� �ٸ��� �̴� a_ptr �̶�� ������ ������ �ּҰ��� ��� �Ǳ� �����̴�.
	printf("char�� ������ �ּ� : %x, %x\n", &c, c_ptr);

	printf("�ڷ��� �� ũ�� : %x, %x, %x\n", sizeof(i_ptr), sizeof(d_ptr), sizeof(c_ptr));

	return 0;
}