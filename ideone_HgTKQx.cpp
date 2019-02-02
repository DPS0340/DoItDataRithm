#include <iostream>

using namespace std;

int min4(int a, int b, int c, int d) {
	int min = a;
	if(b < min) min = b;
	if(c < min) min = c;
	if(d < min) min = d;
	return min;
}

int main() {
	cout << min4(1, 2, 5, 2) << endl;
}