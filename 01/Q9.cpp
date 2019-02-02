#include <iostream>

using namespace std;

int sumof(int a, int b) {
	int min, max;
	int result = 0;
	if(a < b) {
		min = a;
		max = b;
	} else {
		min = b;
		max = a;
	}
	for(int i=min;i<=max;i++) {
		result += i;
	}
	return result;
}

int main() {
	cout << sumof(1, 10) << endl;
	cout << sumof(10, 1) << endl;
	return 0;
}
