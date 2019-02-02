#include <iostream>

using namespace std;

int min3(int a, int b, int c) {
	int min = a;
	if(b < min) min = b;
	if(c < min) min = c;
	return min;
}

int main() {
	cout << min3(1, 2, 5) << endl;
}