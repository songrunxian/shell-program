#include <stdio.h>
#include <iostream>
using namespace std;
#define max_n 600005

int main() {
	int data[max_n]={1,1,0,0};
	int n = 0;
	for(int i = 4; i<max_n; i++) {
		for(int j=2; j<=(i/2); j++) {
			if( !(i%j) ){
				data[i]=1;
				break;
			}
		}
	}
	for(int i = 2; i < max_n; i++) {
		if(!data[i]) {
			n++;
			cout << i << endl;
		}
		if(n==10001) break;
	}
	return  0;
}
