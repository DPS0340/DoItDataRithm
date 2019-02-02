#include <iostream>

using namespace std;

void triangleLU(int n) {
	for(int i=n-1;i>=0;i--) {
		for(int j=0;j<=i;j++) {
			cout << "*";
		}
		cout << endl;
	}
	return;
}


int main() {
	triangleLU(5);
}