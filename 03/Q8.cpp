#include <iostream>

using namespace std;

int compar(const void *a, const void *b) {
	if(*(int *)a < *(int *)b) {
		return -1;
	} else if(*(int *)a > *(int *)b) {
		return 1;
	} else {
		return 0;
	}
}

// char는 1바이트!
void* binsearch(const void* key, const void* base, size_t nmemb,
	size_t size, int(*compar)(const void *, const void *)) {
	int i = size / 2;
	int delta = size / 4;
	while(true) {
		if(compar(key, (char*)base + i * size) == -1) {
			i -= delta;
			if(delta == 0) {
				i--;
			}
			delta /= 2;
		} else if(compar(key, (char*)base + i * size) == 1) {
			i += delta;
			if(delta == 0) {
				i++;
			}
			delta /= 2;
		} else {
			return (char*)base + i * size;
		}
		if(i == -1 || i == (int)nmemb) {
			return NULL;
		}
	}
}

int main() {
	int arr[5] = {1, 2, 3, 4, 5};
	size_t size = sizeof(int);
	size_t len = 5;
	int key = 5;
	int* p = (int*) binsearch(&key, arr, len, size, compar);
	if(p != NULL) {
		cout << p - arr << endl;
	}
	return 0;
}
