#include <stdio.h>

int sum(int, int);

int main() {
	int (*fp)(int, int);
	int res;

	fp = sum; //sum이라는 함수의 주소값을 받음.
	res = fp(10, 20); //fp라는 포인터 함수를 sum이라는 함수처럼 사용 가능, fp가 sum 함수의 시작 주소를 가지고 있기 때문.
	printf("result : %d\n", res);

	return 0;
}
int sum(int a, int b) {
	return (a + b);
}