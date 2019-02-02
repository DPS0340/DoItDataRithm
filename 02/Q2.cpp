#include <iostream>

using namespace std;

int sumof(const int a[], int n) {
	int sum = 0;
	for(int i=0;i<n;i++) {
		sum += a[i];
	}
	return sum;
}

int main() {
	srand(time(NULL));
	constexpr int n = 50;
	int heights[n];
	for(int i=0;i<n;i++) {
		heights[i] = rand() % 101 + 100;
	}
	cout << sumof(heights, n) << endl;
	return 0;
}