#include <iostream>

using namespace std;

int main() {
	int a, b;
	cout << "a의 값 : ";
	cin >> a;
	cout << a << endl;
	cout << "b의 값 : ";
	cin >> b;
	cout << b << endl;
	while(b <= a) {
		cout << "a보다 큰 값을 입력하세요!" << endl;
		cout << "b의 값 : ";
		cin >> b;
		cout << b << endl;
	}
	cout << "b - a는 " << b - a << "입니다." << endl;
}