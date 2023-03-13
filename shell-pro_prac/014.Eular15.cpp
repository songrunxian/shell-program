#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
	long ans = 1, fenmu = 20;
	for (long i = 40; i >= 21; i--) {
		ans *= i;
		while( !(ans % fenmu) && fenmu != 1 ) {
			ans /= fenmu;
			fenmu--;
			printf("fenmu is %ld\n", fenmu);
		}
	}
	printf("%ld\n", ans);
	return 0;
}

