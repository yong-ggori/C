#include <stdio.h>

//output
//pa: ~ �ּ�
//pb: ~�ּ�
//pb-pa:2
//�տ� �ִ� �迭 ��� �� ��� : 20
int main(void) {
	int arr[] = { 10,20,30,40,50 };
	int* pa = arr;
	int* pb = pa + 3;
	pa++;

	printf("pa : %u\n", pa);
	printf("pb : %u\n", pb);
	printf("pb - pa : %u\n", pb - pa);
	printf("�տ� �ִ� �迭 ��� �� ��� : %d\n", pa>pb?*pa:*pb);//���� ������
	//if(pa>pb) printf("%d", *pa);
	//else if(pb>pa) printf("%d", *pb);

	return 0;
}