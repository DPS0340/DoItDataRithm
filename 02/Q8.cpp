#include <iostream>

using namespace std;

void ary_copy(int a[], const int b[], int n) {
	for(int i=0;i<n;i++) {
		a[i] = b[i];
	}
	return;
}

int main() {
	int arr[5] = {1, 2, 3, 4, 5};
	int new_arr[5];
	ary_copy(new_arr, arr, 5);
	for(int i=0;i<5;i++) {
		cout << new_arr[i] << " ";
	}
	return 0;
}