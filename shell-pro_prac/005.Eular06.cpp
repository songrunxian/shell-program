#include <stdio.h>
#include <cmath>
#include <iostream>
using namespace std;
int main() {
	int n, sum1 = 0, sum2 = 0, sum3 = 0;
	cin >> n;
	for(int i = 1; i <= n; i++) {
		sum1 += pow(i, 2);
	}
	for(int i = 1; i <= n; i++) {
		sum2 += i;
	}
	sum3 = pow(sum2, 2);
	cout << sum3-sum1 << endl;
	return 0;
}
