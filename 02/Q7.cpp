#include <iostream>
#include <cstdio>

using namespace std;

void card_conv(unsigned x, int n) {
	char* dchar = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char* temp = (char*)malloc(sizeof(char) * n / x + 1);
	for(int i=0;i<n / x + 1;i++) {
		temp[i] = NULL;
	}
	int digits;
	for(digits=0;x!=0;digits++) {
		cout << n << "|";
		temp[digits] = dchar[x % n];
		printf("%10d", x);
		cout << " ... " << x % n << endl;
		x /= n;
		cout << " +----------" << endl;
	}
	cout << "  ";
	printf("%10d", x);
	cout << endl << "2진수로 ";
	// Q5의 방법
	for(int i=0; i<digits/2;i++) {
		int t = temp[i];
		temp[i] = temp[digits-i-1];
		temp[digits-i-1] = t;
	}
	for(int i=0;i<digits;i++) {
		cout << temp[i];
	}
	cout << "입니다." << endl;
	return;
}

int main() {
	int x, n, flag;
	do {
		cout << "10진수를 기수 변환합니다." << endl;
		cout << "변환하는 음이 아닌 정수: ";
		cin >> x;
		cout << x << endl;
		cout << "어떤 진수로 변환할까요? (2-36) : ";
		cin >> n;
		cout << n << endl;
		card_conv(x, n);
		cout << "한번 더 할까요?(1 ... 예/0 ... 아니오) : ";
		cin >> flag;
		cout << flag << endl;
	} while(flag == 1);
	return 0;
}