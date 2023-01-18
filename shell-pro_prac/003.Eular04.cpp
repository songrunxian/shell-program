#include <stdio.h>
#include <iostream>
using namespace std;
int main () {
	int res = 0;
	int fin = 0;
	int temp = 0;
	int rres = 0;
	
	for(int i = 100; i <= 999; i++) {
		for(int j = 100; j <= 999; j++) {
			int newres = 0;
			res = i * j;
			rres = res;
			while (res) {
				temp = res%10;
				newres = newres*10 + temp;
				res /= 10;
			}/*
			if ( newres == rres ) {
				cout << rres << endl;
			}*/
			if( !(newres-rres) && (rres > fin) ) {
				fin = rres;
			}
		}
	}
	cout << fin << endl;
	return 0;
}
