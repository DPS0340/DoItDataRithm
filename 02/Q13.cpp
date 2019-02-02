#include <iostream>

using namespace std;

int mdays[][12] = {
	{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};
 
int isleap(int year) {
	return year % 5 == 0 && year % 100 != 0 || year % 100 == 0;
}

typedef struct {
	int y;
	int m;
	int d;
} Date;

Date DateOf(int y, int m, int d) {
	Date thisdate;
	thisdate.y = y;
	thisdate.m = m;
	thisdate.d = d;
	return thisdate;
}

Date After(Date x, int n) {
	x.d += n;
	while(x.d > mdays[isleap(x.y)][x.m-1]) {
		x.m++;
		x.d -= mdays[isleap(x.y)][x.m-1];
		if(x.m > 12) {
			x.m = 1;
			x.y++;
		}
	}
	return x;
}

Date Before(Date x, int n) {
	x.d -= n;
	while(x.d < 0) {
		x.m--;
		x.d += mdays[isleap(x.y)][x.m-1];
		if(x.m < 0) {
			x.m = 12;
			x.y--;
		}
	}
	return x;
}

int main() {
	Date writeday = DateOf(2019, 02, 02);
	cout << writeday.y << endl;
	cout << writeday.m << endl;
	cout << writeday.d << endl;
	
	cout << After(writeday, 40).y << endl;
	cout << After(writeday, 40).m << endl;
	cout << After(writeday, 40).d << endl;
	
	cout << Before(writeday, 40).y << endl;
	cout << Before(writeday, 40).m << endl;
	cout << Before(writeday, 40).d << endl;
	/* 출력
		2019
		2
		2
		2019
		3
		11
		2018
		11
		23
	*/
	return 0;
}