#include <iostream>

using namespace std;

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	return;
}

void bubble(int a[], int n) {
	int cmp_n, swap_n, pass_n, cmp_index, swap_index;
	pass_n = 0;
	cmp_n = 0;
	swap_n = 0;
	cmp_index = -1;
	swap_index = -1;
	for(int i=0;i<n-1;i++) {
		pass_n++;
		cout << "패스" << pass_n << ":" << endl;
		for(int j=n-1;j>i;j--) {
			cmp_n = 0;
			cmp_index = j-1;
			if(a[j-1] > a[j]) {
				swap_index = j-1;
				swap_n++;
				swap(&a[j], &a[j+1]);
			} else {
				swap_index = -1;
			}
			cout << " ";
			for(int k=0;k<n;k++) {
				cout << a[k];
				if(k == cmp_index && k == swap_index) cout << " - ";
				else if(k == cmp_index && k != swap_index) cout << " + ";
				else cout << "   ";
			}
			cout << endl;
		}
	}
	cout << "비교를 " << cmp_n << "회 했습니다." << endl;
	cout << "교환을 " << swap_n << "회 했습니다." << endl;
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