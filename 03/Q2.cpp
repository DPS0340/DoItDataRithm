#include <iostream>
#include <cstdio>

using namespace std;

int search(int a[], int n, int key) {
	cout << "   |";
	for(int i=0;i<n;i++) {
		printf("%3d", i);
	}
	cout << endl;
	cout << "---+";
	for(int i=0;i<6;i++) {
		cout << "---";
	}
	cout << endl;
	for(int i=0;i<n;i++) {
		cout << "   |";
		for(int j=0;j<i;j++) {
			cout << "   ";
		}
		cout << "  ";
		cout << "*" << endl;
		printf("%3d|", i);
		for(int j=0;j<n;j++) {
			printf("%3d", a[j]);
		}
		cout << endl;
		if(a[i] == key) {
			cout << key << "은 x[" << i << "]에 존재합니다." << endl;
			return i;
		}
	}
	cout << key << "은 존재하지 않습니다.";
	return -1;
}

int main() {
	int arr[7] = {1, 2, 3, 4, 5, 6, 7};
	search(arr, 7, 6);
	search(arr, 7, 0);
	return 0;
}