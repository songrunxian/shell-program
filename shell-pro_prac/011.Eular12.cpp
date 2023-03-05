#include <stdio.h>
#include <math.h>
int cal (int);
int main() {
	int tri_num = 1;
	int ziran = 2;
	while (tri_num) {
		tri_num += ziran;
		ziran += 1;
		int re = cal(tri_num);
		if ( re > 500 ) {
			printf("%d	%d\n", tri_num, re);
		}
	}	
	return 0;
}
int cal(int num) {
	int res = 0;
	for(int i = 1; i <= num; i++) {
		if( !(num % i) ) {
			res++;
		}
	}
	return res;
}
