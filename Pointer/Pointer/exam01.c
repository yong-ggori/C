#include <stdio.h>

int main(void) {
	int a;
	double b;
	char c;

	int* i_ptr = &a;
	double* d_ptr = &b;
	char* c_ptr = &c;

	printf("int형 변수의 주소 : %x, %x\n", &a, i_ptr); //&a 의 값과 포인터변수인 a_ptr이 가지는 주소값은 같다.
	printf("double형 변수의 주소 : %x, %x\n", &b, d_ptr);//하지만 &a_ptr 값은 다른데 이는 a_ptr 이라는 변수가 가지는 주소값이 출력 되기 때문이다.
	printf("char형 변수의 주소 : %x, %x\n", &c, c_ptr);

	printf("자료형 별 크기 : %x, %x, %x\n", sizeof(i_ptr), sizeof(d_ptr), sizeof(c_ptr));

	return 0;
}