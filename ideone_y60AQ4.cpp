#include <iostream>

using namespace std;

void triangleLB(int n) {
	for(int i=0;i<n;i++) {
		for(int j=0;j<=i;j++) {
			cout << "*";
		}
		cout << endl;
	}
	return;
}


int main() {
	triangleLB(5);
}