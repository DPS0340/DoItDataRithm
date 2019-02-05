#include <iostream>
 
using namespace std;
 
int factorial(int n) {
	int result = 1;
	for(int i=2;i<=n;i++) {
		result *= i;
	}
	return result;
}
 
int main() {
	cout << factorial(1) << endl;
	cout << factorial(2) << endl;
	cout << factorial(3) << endl;
	return 0;
}
