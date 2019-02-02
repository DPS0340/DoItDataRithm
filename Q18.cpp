#include <iostream>
 
using namespace std;
 
void nrspira(int n) {
	for(int i=n;i>=0;i--) {
		for(int j=0;j<n-i;j++) {
			cout << " ";	
		}
		for(int j=0;j<=(i-1)*2;j++) {
			cout << n - i + 1 % 10;
		}
		cout << endl;
	}
}
 
int main() {
	nrspira(4);
	return 0;
}