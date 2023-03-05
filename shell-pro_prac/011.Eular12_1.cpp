#include <iostream>
#include <stdio.h>
#include <math.h>
#define max_n 1000

int prim[max_n] = {0};
int f[max_n] = {0};

int init() {
	for(int i = 2; i < max_n; i++) {
		for(int j = 2; j < max_n; j++) {
			if(i*j >= max_n) break;
			prim[i*j] = 1;
		}
	}
	return 0;
}

int func(int num) {
	for(int i = 2; i < max_n; i++) {
		if( !prim[i] ) {
			if ( i > num ) break;
			int flag=1;
			while( !(num % int(pow(i,flag))) ) {
				flag++;
			}
			f[i] = flag;
		}
	}
	int result = 1;
	for(int i = 2; i < max_n; i++) {
		if( f[i] ) {
			result	*= (f[i]); 
		}
	}
	//printf("num is %d ; result is %d\n", num, result);
	return result;
}

int main() {
	int num;
	init(); //素数筛
        int tri_num = 1;
        int ziran = 2;
        while (tri_num) {
                tri_num += ziran;
                ziran += 1;
                int re = func(tri_num);
                if ( re > 500 ) {
                        printf("%d      %d\n", tri_num, re);
			break;
                }
        }
	return 0;
}
