#include <iostream>

using namespace std;


int search_idx(const int a[], int n, int key, int idx[]) {
	int index = 0;
	for(int i=0;i<n;i++) {
		if(a[i] == key) {
			idx[index++] = i;
		}
	}
	return index;
}

int main() {
	int arr[10] = {0,};
	int idx[10];
	// 10
	cout << search_idx(arr, 10, 0, idx) << endl;
	return 0;
}