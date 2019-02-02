#include <iostream>

using namespace std;

void triangleRU(int n) {
	for(int i=0;i<n;i++) {
		for(int j=1;j<n-i;j++) {
			cout << " ";
		}
		for(int j=0;j<=i;j++) {
			cout << "*";
		}
		cout << endl;
	}
	return;
}


int main() {
	triangleRU(5);
}