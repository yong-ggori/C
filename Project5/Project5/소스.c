#include <stdio.h>

void map(int map[10]);

int main(void) {
	int map[10];

	for (int idx=0; idx < 10; idx++)
		scanf("%d", map[idx]);

	map(map);

	return 0;
}
void map(int map[10]) {
	for (int idx=0; idx < 10; idx++)
		printf("%d ", map[idx]);
}