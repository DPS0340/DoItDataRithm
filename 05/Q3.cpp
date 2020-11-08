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

int gcd_array(const int a[], int n) {
	int result = gcd(a[0], a[1]);
	for(int i=2;i<n;i++) {
		result = gcd(result, a[i]);
	}
	return result;
}

int main() {
	int arr[3] = {2, 4, 8};
	cout << gcd_array(arr, 3) << endl;
	return 0;
}
