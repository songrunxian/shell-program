#include <iostream>
#include <cmath>
#include "myfunc.h"
using namespace std;
int main(int argc , char *argv[]) {
	int n = atoi(argv[1]);
	int m = atoi(argv[2]);
	cout << pow(n,m) << endl;
	return 0;
}
