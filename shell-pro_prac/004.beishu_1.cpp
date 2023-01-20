#include <stdio.h>
#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
	int num1 = atoi(argv[1]);	//atoi 强制转换字符串变数字（单个字符，就char c - '0'）
	int num2 = atoi(argv[2]);
	//cin >> num1 >> num2;
	if( num1 % num2 ) {
		cout << 0 << endl;
	} else {
		cout << 1 << endl;
	}
	return 0;
}
