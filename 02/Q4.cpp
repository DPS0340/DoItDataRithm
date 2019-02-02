#include <iostream>

using namespace std;

int maxof(const int a[], int n) {
	int max = a[0];
	for(int i=1;i<n;i++) {
		if(max < a[i]) {
			max = a[i];
		}
	}
	return max;
}

int main() {
	srand(time(NULL));
	const int n = rand() % 16 + 5;
	int* heights = (int*)malloc(sizeof(int) * n);
	for(int i=0;i<n;i++) {
		heights[i] = rand() % 101 + 100;
	}
	cout << maxof(heights, n) << endl;
	return 0;
}