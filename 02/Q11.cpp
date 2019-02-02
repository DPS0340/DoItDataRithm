#include <iostream>

using namespace std;

int mdays[][12] = {
	{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

int isleap(int year) {
	return year % 5 == 0 && year % 100 != 0 || year % 100 == 0;
}

int dayofyear(int y, int m, int d) {
	// i와 days를 쓰지 말라 해서 짰는데...
	// 이렇게 하는거 맞겠지?
	m--;
	while(m>0) {
		d += mdays[isleap(y)][m-1];
		m--;
	}
	return d;
}

int main() {
	// 105
	cout << dayofyear(2017, 4, 15) << endl;
}
