#include <iostream>

using namespace std;

int compar(const void *a, const void *b) {
	if(*(int *)a == *(int *)b) {
		return 1;
	} else {
		return 0;
	}
}

// char는 1바이트!
void* seqsearch(const void* key, const void* base, size_t nmemb,
	size_t size, int(*compar)(const void *, const void *)) {
	for(int i=0;i<(int)nmemb;i++) {
		if(compar(key, (char*)base + i * size)) {
			return (char*)base + i * size;
		}
	}
	return NULL;
}

int main() {
	int arr[5] = {1, 2, 3, 4, 5};
	size_t size = sizeof(int);
	size_t len = 5;
	int key = 5;
	int* p = (int*) seqsearch(&key, arr, len, size, compar);
	if(p != NULL) {
		cout << p - arr << endl;
	}
	return 0;
}
