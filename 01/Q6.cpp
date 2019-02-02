#include <iostream>

using namespace std;

int main() {
	int i, n, sum;
	cout << "1부터 n까지의 합을 구합니다." << endl;
	cout << "n의 값 : ";
	cin >> n;
	cout << n << endl;
	sum = 0;
	i = 1;
	while(i <= n) {
		sum += i;
		i++;
	}
	cout << "i의 값 : " << i << endl;
	cout << "1부터 " << n << "까지의 합은 " << sum << "입니다." << endl;
	return 0;
}
