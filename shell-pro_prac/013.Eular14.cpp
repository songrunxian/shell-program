#include <stdio.h>
#include <iostream>
#define max_n 1000000
#define ll long long
ll jisuan(ll);
int main() {
	ll max = 0;
	ll fin = 0;	
	for(ll i = 2; i <= max_n; i++) {
		ll temp = jisuan(i);
		if (temp > max) {
			max = temp;
			fin = i;
		}
	}
	
	printf("%lld %lld\n", fin, max);
	return 0;
}
ll jisuan (ll num) {
	if(num == 1) {
		printf("%lld\n", num);
		return 1;
	}
	if(!(num % 2)) {
		printf("%lld ", num);
		return 1 + jisuan(num/2);
	} else {
		printf("%lld ", num);
		return 1 + jisuan(3*num + 1);
	}
}
