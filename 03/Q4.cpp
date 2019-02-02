#include <iostream>
#include <iostream>

using namespace std;

int bin_search(const int a[], int n, int key) {
	cout << "   |";
	for(int i=0;i<n;i++) {
		printf("%3d", i);
	}
	cout << endl;
	cout << "---+";
	for(int i=0;i<6;i++) {
		cout << "---";
	}
	cout << endl;
	int pl = 0;
	int pr = n-1;
	do {
		cout << "   |";
		for(int i=0;i<pl;i++) {
			cout << "   ";
		}
		cout << "<-";
		int pc = (pl + pr) / 2;
		for(int i=0;i<pc-pl;i++) {
			cout << "   ";
		}
		cout << "+";
		for(int i=0;i<pr-pc-1;i++) {
			cout << "   ";
		}
		cout << " ->" << endl;
		printf("%3d|", pc);
		for(int i=0;i<n;i++) {
			printf("%3d", a[i]);
		}
		cout << endl;
		if(a[pc] == key) {
			cout << key << "는 x[" << pc <<"]에 있습니다." << endl;
			return pc;
		} else if(a[pc] < key) {
			pl = pc + 1;
		} else {
			pr = pc - 1;
		}
	} while(pl <= pr);
	
	cout << key << "를 찾지 못했습니다." << endl;
	return -1;
}

int main() {
	int arr[7] = {1, 2, 3, 5, 6, 8, 9};
	cout << bin_search(arr, 7, 2);
	return 0;
}