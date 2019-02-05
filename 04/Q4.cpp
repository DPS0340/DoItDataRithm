#include <iostream>

using namespace std;

typedef struct {
	int max;
	int num;
	int front;
	int rear;
	int *que;
} IntQueue;

int Search2(const IntQueue *q, int x) {
	int i;
	for(i=0;i<q->num;i++) {
		if(q->que[(i + q->front) % q->max] == x) {
			return i;
		}
	}
	return -1;
}

int main() {
	return 0;
}
