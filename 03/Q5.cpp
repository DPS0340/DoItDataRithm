#include <iostream>

using namespace std;

int bin_search2(const int a[], int n, int key) {
	int pl = 0;
	int pr = n-1;
	do {
		int pc = (pl + pr) / 2;
		if(a[pc] == key) {
			if(a[pc-1] != key) {
				return pc;
			} else {
				pr = pc - 1;
			}
		} else if(a[pc] < key) {
			pl = pc + 1;
		} else {
			pr = pc - 1;
		}
	} while(pl <= pr);
	
	return -1;
}

int main() {
	int arr[6] = {0, 0, 1, 1, 2, 3};
	cout << bin_search2(arr, 6, 1) << endl;
	return 0;
}