#include <iostream>

using namespace std;

int minof(const int a[], int n) {
	int min = a[0];
	for(int i=1;i<n;i++) {
		if(a[i] < min) {
			min = a[i];
		}
	}
	return min;
}

int main() {
	srand(time(NULL));
	constexpr int n = 50;
	int heights[n];
	for(int i=0;i<n;i++) {
		heights[i] = rand() % 101 + 100;
	}
	cout << minof(heights, n) << endl;
	return 0;
}