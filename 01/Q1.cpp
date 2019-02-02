#include <iostream>

using namespace std;

int max4(int a, int b, int c, int d) {
	int max = a;
	if(max < b) max = b;
	if(max < c) max = c;
	if(max < d) max = d;
	return max;
}

int main() {
	cout << max4(1, 2, 5, 2) << endl;
}
