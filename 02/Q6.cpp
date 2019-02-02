#include <iostream>

using namespace std;

int card_conv(unsigned x, int n, char d[]) {
	char* dchar = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int len = sizeof(d) / sizeof(char);
	char* temp = (char*)malloc(sizeof(char) * len);
	for(int i=0;i<len;i++) {
		temp[len] = NULL;
	}
	int digits;
	for(digits=0;x!=0;digits++) {
		temp[digits] = dchar[x % n];
		x /= n;
	}
	int j = 0;
	for(int i=digits-1;i>=0;i--) {
		d[j] = temp[i];
		j++;
	}
	return digits;
}

int main() {
	char d[2];
	card_conv(59, 16, d);
	for(int i=0;i<2;i++) cout << d[i] << " ";
	return 0;
}