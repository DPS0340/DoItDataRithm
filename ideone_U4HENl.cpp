#include <iostream>

using namespace std;

int len(int n) {
	int length;
	for(length = 0;n!=0;length++) {
		n /= 10;
	}
	return length;
}

int main() {
	int num = 1234;
	cout << len(1234) << endl;
}