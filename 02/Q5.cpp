#include <iostream>

using namespace std;

void ary_reverse(int arr[], int n) {
	for(int i=0;i<n;i++) cout << arr[i] << " ";
	cout << endl;
	for(int i=0;i<n/2;i++) {
		cout << "a[" << i << "]과 a[" << n-i-1 << "]을 교환합니다." << endl;
		int temp = arr[i];
		arr[i] = arr[n-i-1];
		arr[n-i-1] = temp;
		for(int i=0;i<n;i++) cout << arr[i] << " ";
		cout << endl;
	}
	cout << "역순 정렬을 종료합니다." << endl;
	return;
}

int main() {
	int arr[6] = {5, 10, 73, 2, -5, 42};
	ary_reverse(arr, 6);
	return 0;
}