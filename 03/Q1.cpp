#include <iostream>

using namespace std;

int search(int a[], int n, int key) {
	int i;
	a[n] = key;
	for(i=0;a[i] != key;i++);
	return i == n + 1 ? -1 : i;
}

int main() {
	int arr[5] = {1, 2, 3, 4, 5};
	// -1
	cout << search(arr, 5, 0) << endl;
	// -4
	cout << search(arr, 5, 5) << endl;
	return 0;
}