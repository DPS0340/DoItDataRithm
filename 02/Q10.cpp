#include <iostream>

using namespace std;

void shuffle(int a[], int n) {
	srand(time(NULL));
	int selection, temp;
	for(int i=0;i<n;i++) {
		selection = rand() % n;
		temp = a[selection];
		a[selection] = a[i];
		a[i] = temp;
	}
	return;
}

int main() {
	constexpr int n = 50;
	int arr[n];
	for(int i=0;i<n;i++) {
		arr[i] = i;
	}
	shuffle(arr, n);
	for(int i=0;i<n;i++) {
		cout << arr[i] << " ";
	}
	return 0;
}