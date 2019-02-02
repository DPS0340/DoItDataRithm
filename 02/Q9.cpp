#include <iostream>

using namespace std;

void ary_rcopy(int a[], const int b[], int n) {
	for(int i=0;i<n;i++) {
		a[i] = b[n-i-1];
	}
	return;
}

int main() {
	int arr[5] = {1, 2, 3, 4, 5};
	int new_arr[5];
	ary_rcopy(new_arr, arr, 5);
	for(int i=0;i<5;i++) {
		cout << new_arr[i] << " ";
	}
	return 0;
}