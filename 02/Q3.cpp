#include <iostream>

using namespace std;

double aveof(const int a[], int n) {
	double sum = 0.0;
	for(int i=0;i<n;i++) {
		sum += (double)a[i];
	}
	return sum / (double)n;
}

int main() {
	srand(time(NULL));
	constexpr int n = 50;
	int heights[n];
	for(int i=0;i<n;i++) {
		heights[i] = rand() % 101 + 100;
	}
	cout << aveof(heights, n) << endl;
	return 0;
}