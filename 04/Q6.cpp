#include <iostream>

using namespace std;

typedef struct {
	int front;
	int back;
	int *que;
} Deck;

void Init(Deck* d, int max) {
	d->que = (int*)malloc(sizeof(int) * max);
	d->front = 0;
	d->back = 1;
	return;
}

void Enque_Front(Deck* d, int n) {
	d->que[d->front--] = n;
	return;
}

void Enque_Back(Deck* d, int n) {
	d->que[d->back++] = n;
	return;
}

int Deque_Front(Deck* d) {
	return d->que[++d->front];
}

int Deque_Back(Deck* d) {
	return d->que[--d->back];
}

void Print(Deck* d) {
	for (int i = d->front + 1;i < d->back; i++) {
		cout << d->que[i] << " ";
	}
	cout << endl;
	return;
}

void Terminate(Deck* d) {
	free(d);
	return;
}

int main() {
	Deck* d = (Deck*)malloc(sizeof(Deck));
	Init(d, 10);
	Enque_Front(d, 1);
	Print(d);
	Deque_Front(d);
	Enque_Back(d, 2);
	Enque_Back(d, 3);
	Print(d);
	Terminate(d);
	return 0;
}
