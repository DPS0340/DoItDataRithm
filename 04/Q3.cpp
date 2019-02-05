#include <iostream>

using namespace std;

typedef struct {
	int max;
	int num;
	int *que;
} ArrayIntQueue;


void init(ArrayIntQueue* Que, int len) {
	Que->max = len;
	Que->que = (int*)malloc(sizeof(int) * len);
	Que->num = 0;
	return;
}

void Enque(ArrayIntQueue* Que, int n) {
	Que->que[Que->num++] = n;
	return;
	
}

int Deque(ArrayIntQueue* Que) {
	int result = Que->que[0];
	for(int i=1;i<Que->num;i++) {
		Que->que[i-1] = Que->que[i];
	}
	Que->num--;
	return result;
}

void Print(ArrayIntQueue* Que) {
	for(int i=0;i<Que->num;i++) {
		cout << Que->que[i] << " ";
	}
	return;
}

void Terminate(ArrayIntQueue* Que) {
	free(Que);
	return;
}

int main() {
	ArrayIntQueue* Queue = (ArrayIntQueue*)malloc(sizeof(ArrayIntQueue));
	init(Queue, 5);
	for(int i=0;i<5;i++) {
		Enque(Queue, 7);
	}
	Print(Queue);
	for(int i=0;i<5;i++) {
		Deque(Queue);
	}
	Terminate(Queue);
	return 0;
}
