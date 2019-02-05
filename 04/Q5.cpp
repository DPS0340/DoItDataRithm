#include <iostream>

using namespace std;

typedef struct {
	int max;
	int num;
	int front;
	int rear;
	int *que;
} IntQueue;

// 본문에 작성된 함수 시작

/*--- 큐 초기화 ---*/
int Initialize(IntQueue *q, int max) {
	q->num = q->front = q->rear = 0;
	if ((q->que = (int*)calloc(max, sizeof(int))) == NULL) {
		q->max = 0;							/* 배열 생성에 실패 */
		return -1;
	}
	q->max = max;
	return 0;
}

/*--- 큐에 데이터를 인큐 ---*/
int Enque(IntQueue *q, int x) {
	if (q->num >= q->max)
		return -1;							/* 큐가 가득 참 */
	else {
		q->num++;
		q->que[q->rear++] = x;
		if (q->rear == q->max)
			q->rear = 0;
		return 0;
	}
}

/*--- 큐에서 데이터를 디큐 ---*/
int Deque(IntQueue *q, int *x) {
	if (q->num <= 0)						/* 큐는 비어 있음 */
		return -1;
	else {
		q->num--;
		*x = q->que[q->front++];
		if (q->front == q->max)
			q->front = 0;
		return 0;
	}
}

/*--- 큐에서 데이터를 피크 ---*/
int Peek(const IntQueue *q, int *x) {
	if (q->num <= 0)						/* 비어 있는 상태의 큐 */
		return -1;
	*x = q->que[q->front];
	return 0;
}

/*--- 모든 데이터 삭제 ---*/
void Clear(IntQueue *q) {
	q->num = q->front = q->rear = 0;
}

/*--- 큐의 최대 용량 ---*/
int Capacity(const IntQueue *q) {
	return q->max;
}

/*--- 큐에 쌓여 있는 데이터의 개수 ---*/
int Size(const IntQueue *q) {
	return q->num;
}

/*--- 큐가 비어 있나요? ---*/
int IsEmpty(const IntQueue *q) {
	return q->num <= 0;
}

/*--- 큐가 가득 찼나요? ---*/
int IsFull(const IntQueue *q) {
	return q->num >= q->max;
}

/*--- 큐에서 검색 ---*/
int Search(const IntQueue *q, int x) {
	int i, idx;

	for (i = 0; i < q->num; i++) {
		if (q->que[idx = (i + q->front) % q->max] == x)
			return idx;		/* 검색 성공 */
	}
	return -1;				/* 검색 실패 */
}

/*--- 모든 데이터 출력 ---*/
void Print(const IntQueue *q) {
	int i;

	for (i = 0; i < q->num; i++)
		printf("%d ", q->que[(i + q->front) % q->max]);
	putchar('\n');
}

/*--- 큐의 종료 ---*/
void Terminate(IntQueue *q) {
	if (q->que != NULL)
		free(q->que);		/* 메모리에 할당한 배열 해제 */
	q->max = q->num = q->front = q->rear = 0;
}

// 본문에 작성되어있는 함수 끝


// Q4에서 만든 Search2 함수
int Search2(const IntQueue *q, int x) {
	int i;
	for (i = 0; i < q->num; i++) {
		if (q->que[(i + q->front) % q->max] == x) {
			return i;
		}
	}
	return -1;
}

int main() {
	int max;
	cin >> max;
	IntQueue* q = (IntQueue*)malloc(sizeof(IntQueue));
	int command, n;
	do {
		cin >> command;
		switch (command) {
		case 0:
			break;
		case 1:
			cin >> n;
			Enque(q, n);
			break;
		case 2:
			Deque(q, &n);
			cout << n << endl;
			break;
		case 3:
			Peek(q, &n);
			cout << n << endl;
			break;
		case 4:
			Clear(q);
			break;
		case 5:
			cout << Capacity(q) << endl;
			break;
		case 6:
			cout << Size(q) << endl;
			break;
		case 7:
			cout << IsEmpty(q) << endl;
			break;
		case 8:
			cout << IsFull(q) << endl;
			break;
		case 9:
			cin >> n;
			cout << Search(q, n) << endl;
			break;
		case 10:
			Print(q);
			break;
		}
	} while (command != 0);
	Terminate(q);
	return 0;
}
