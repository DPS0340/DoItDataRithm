#include <iostream>

using namespace std;

int gcd(int x, int y) {
	while(y != 0) {
		int temp = x;
		x = y;
		y = temp % y;
	}
	return x;
}

int main() {
	cout << gcd(22, 8) << endl;
	return 0;
}
