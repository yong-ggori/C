#include <stdio.h>

void ant(int map[][10], int x, int y);

int main() {
	int x, y;
	static int map[10][10];

	for (x = 0; x < 10; x++) {
		for (y = 0; y < 10; y++) {
			scanf_s("%d", &map[x][y]);
		}
	}
	
	ant(map, 1, 1);
	printf("========================================\n");

	for (x = 0; x < 10; x++) {
		for (y = 0; y < 10; y++) {
			printf("%d ", map[x][y]);
		}
		printf("\n");
	}

	return 0;
}
void ant(int map[][10], int x, int y) {
	if (map[x][y] == 2) {
		map[x][y] = 9;
		return;
	}
	map[x][y] = 9;

	if (map[x][y + 1] != 1) {
		y++;
	}
	else if (map[x + 1][y] != 1) {
		x++;
	}
	else { return; }

	ant(map, x, y);
}