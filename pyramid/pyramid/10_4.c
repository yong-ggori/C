#include <stdio.h>

//output
//pa: ~ 주소
//pb: ~주소
//pb-pa:2
//앞에 있는 배열 요소 값 출력 : 20
int main(void) {
	int arr[] = { 10,20,30,40,50 };
	int* pa = arr;
	int* pb = pa + 3;
	pa++;

	printf("pa : %u\n", pa);
	printf("pb : %u\n", pb);
	printf("pb - pa : %u\n", pb - pa);
	printf("앞에 있는 배열 요소 값 출력 : %d\n", pa>pb?*pa:*pb);//삼항 연상자
	//if(pa>pb) printf("%d", *pa);
	//else if(pb>pa) printf("%d", *pb);

	return 0;
}