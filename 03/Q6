#include <iostream>
 
using namespace std;
 
int long_cmp(const void *a, const void *b) {
	if(*(long*)a < *(long*)b) {
		return 1;
	} else if (*(long*)a > *(long*)b) {
		return -1;
	} else {
		return 0;
	}
}
 
int main() {
	long arr[5] = {5, 4, 3, 2, 1};
	long find = 2;
	long* p;
	p = (long*) bsearch(&find, arr, 5, sizeof(long), long_cmp);
	if(p == NULL) {
		cout << "검색에 실패했습니다." << endl;
	} else {
		cout << find <<"는(은) x[" << (long)(p - arr) << "]에 있습니다." << endl;
	}
	free(arr);
	return 0;
}
