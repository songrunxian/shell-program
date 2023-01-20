#include "myfunc.h"
#include <stdio.h>
#include <iostream>
using namespace std;
int beishu(int num1, int num2) {
	if( num1 % num2 ) {
		return 0;
	} else {
		return 1;
	}
}
