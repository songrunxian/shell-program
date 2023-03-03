#include <stdio.h>
#define max_n 20

int cal(int, int);

int data[max_n][max_n];
int dir[4][2] = {	//4个方向，每个方向的单位位移点
	-1,-1,
	-1,0,
	-1,1,
	0,1
};

int main() {
	for(int i = 0; i < max_n; i++) {
		for(int j = 0; j < max_n; j++) {
			scanf("%d", &data[i][j]);
		}
	}
	int max = 0;
	for(int i = 0; i < max_n; i++) {
		for(int j = 0; j < max_n; j++) {
			int r = cal(i,j);
			if (r > max) {
				max = r;
			}
		}
	}
	printf("%d\n", max);
	return 0;
}
int cal(int x, int y) {
	int dx, dy;
	int ans = 0;
	for(int direction = 0; direction < 4; direction++) {
		int re = 1;
		for(int time = 0; time < 4; time++) {
			dx = x + time*dir[direction][0];
			dy = y + time*dir[direction][1];
			if(dx < 0 || dx > max_n) break;
			if(dy < 0 || dy > max_n) break;
			re *= data[dx][dy];
		}
		if ( re > ans) {
			ans = re;
		}
	}
	//printf("%d", ans);
	return ans;
}
