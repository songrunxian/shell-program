#include <stdio.h>
#include <cmath>

int main() {
	int a = 0, b = 0;
	for(int n = 1; n <= 23; n++) {
		for(int m = n+1; m <= 24; m++) {
			if( m*(m+n) == 500 ) {
				printf("m=%d n=%d\n", m, n);
				a=m;b=n;
				break;
			}
		}
	}
	printf("a = %d\n", 2*a*b);
	printf("b = %f\n", pow(a,2) - pow(b,2));
	printf("c = %f\n", pow(a,2) + pow(b,2));
	printf("%d\n", 200*375*425);
	return 0;
}
