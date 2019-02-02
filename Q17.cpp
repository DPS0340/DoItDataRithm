#include <iostream>
 
using namespace std;
 
void spira(int n) {
	for(int i=1;i<=n;i++) {
		for(int j=0;j<n-i;j++) {
			cout << " ";	
		}
		for(int j=0;j<=(i-1)*2;j++) {
			cout << "*";
		}
		cout << endl;
	}
}
 
int main() {
	spira(4);
	return 0;
}