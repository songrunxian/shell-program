#include <iostream>
#include <stdio.h>
#include <string.h>
char num[55];
int ans[55] = {0};
int main() {
	for(int i = 0; i < 100; i++) {
		scanf("%s", num);
		int l = strlen(num);
		if (ans[0] < l) ans[0] = l;	//如果数组从1开始方便使用，我们可以把0位当成一个变量记录我们的需求
		for(int j = 54; j >= 55-ans[0]; j--) {	
			ans[j] += (num[l-1]-'0');
			l--;
			if(ans[j] >= 10) {
				int move = ans[j] / 10;
				ans[j] %= 10;
				ans[j-1] += move;
			}
		}
	}
	printf("%d ", ans[0]);
	for(int i = 1; i < 55; i++) {
		printf("%d", ans[i]);
	}	
	printf("\n");
	return 0;
}
