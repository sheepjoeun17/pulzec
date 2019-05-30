#include <stdio.h>

/*****************************************************************************/
#define esc 27
#define LEFT 97
#define RIGHT 100
#define UP 119
#define DOWN 115
#define MAXSTAGE 5
/*****************************************************************************/
void LoadMap(char[5][30][30] map) { //map�� �޾ƿ��� �Լ�
	FILE* fp = fopen("map.txt", "r");
	int level = 0;
	char c = 0;
	int flag = 0;
	int box = 0;
	int keep = 0;
	while (c != EOF) {
		flag = 0;
		for (int y = 0; y < 30; y++) {
			if (flag == -1)
				break;
			for (int x = 0; c != '\n'; x++) {
				c = getc(fp);
				if (c >= '1' && c <= '5') {
					flag = -1;
					level++;
					break;
				}
				map[level][y][x] = c;
			}
		}
	}
	for (int level = 0; level < 5; level++) { //box�� ��������� ������ ������.
		box = 0;
		keep = 0;
		for (int y = 0; y < 30; y++) {
			for (int x = 0; x < 30; x++) {
				if (map[level][y][x] == '$')
					box++; //$����
				else if (map[level][y][x] == 'O')
					keep++; //O����
			}
		}
		if (box != keep)
			printf("box�� ��������� ������ ���� �ʽ��ϴ�.");
	}
}



int main() {
	char map[5][30][30];
	return 0;
}

