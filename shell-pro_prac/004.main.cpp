#include <stdio.h>
#include <iostream>
#include "myfunc.h"
using namespace std;
int main() {
	int i = 30*77*13*17*19;
	while(i) {
		if(beishu(i,2) && beishu(i,3) && beishu(i,4) && beishu(i,5) && beishu(i,6) && beishu(i,7) && beishu(i,8) && beishu(i,9) && beishu(i,10) && beishu(i,11) && beishu(i,12) && beishu(i,13) && beishu(i,14) && beishu(i,15) && beishu(i,16) && beishu(i,17) && beishu(i,18) && beishu(i,19) && beishu(i,20)){
			cout << i << endl;
			break;
		}
		i += 10;
	}
	return 0;
}
