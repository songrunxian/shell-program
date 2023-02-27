#include <stdio.h>
#define max_n 2000005
int main() {
	int data[max_n]={1,1};
	for(int i = 2; i <= max_n; i++) {
		if(data[i]) continue;
		for(int j =2*i; j <= max_n; j += i) {
			data[j] = 1;
		}
	}
	long long sum = 0;
	for(int i = 2; i <= 2000000; i++) {
		if(!data[i]) {
	//		printf("%d ", i);
			sum += i;
		}
	}
	printf("%lld\n", sum);
	return 0;
}
