#include <stdio.h>
#include <iostream>
#define max_n 1000000
#define ll long long
ll jisuan(ll);
ll keep[max_n + 5] = {0};
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
	if( num == 1 ) {
		return 1;
	}
	if( num <= max_n && keep[num] != 0 ) {	//注意这个范围一定要设定，不然3n+1会超过数组限制
		return keep[num];
	}
	ll ret = 0;
	if(!(num & 1)) {
		ret = jisuan(num>>1) + 1;
	} else {
		ret = jisuan(3*num + 1) + 1;
	}
	if( num <= max_n ) keep[num] = ret;
	return ret;
}
