#include <iostream>

using namespace std;

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	return;
}

void bubble(int a[], int n) {
	for(int i=0;i<n-1;i++) {
		for(int j=i;j<n-1;j++) {
			if(a[j] > a[j+1]) {
				swap(&a[j], &a[j+1]);
			}
		}
	}
	return;
}

int main() {
	int arr[5] = {9, 1, 5, 1, 9};
	cout << "버블 정렬" << endl;
	for(int i=0;i<5;i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	bubble(arr, 5);
		for(int i=0;i<5;i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}