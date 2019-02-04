#include <iostream>

using namespace std;

// 책에서 구현된 구조체와 함수 시작
typedef struct {
	int max;
	int ptr;
	int *stk;
} IntStack;

int Initialize(IntStack *s, int max) {
	s->ptr = 0;
	if ((s->stk == calloc(max, sizeof(int))) == NULL) {
		s->max = 0;
		return -1;
	}
	s->max = max;
	return 0;
}

int Push(IntStack *s, int *x) {
	if (s->ptr >= s->max) {
		return -1;
	}
	s->stk[s->ptr++] = *x;
	return 0;
}

int Pop(IntStack *s, int *x) {
	if (s->ptr <= 0) {
		return -1;
	}
	*x = s->stk[--s->ptr];
	return 0;
}

int Peek(const IntStack *s, int *x) {
	if (s->ptr <= 0) {
		return -1;
	}
	*x = s->stk[s->ptr - 1];
	return 0;
}

void Clear(IntStack *s) {
	s->ptr = 0;
}

int Capacity(const IntStack *s) {
	return s->max;
}

int Size(const IntStack *s) {
	return s->ptr;
}

int IsEmpty(const IntStack *s) {
	return s->ptr <= 0;
}

int IsFull(const IntStack *s, int x) {
	int i;
	for (i = s->ptr - 1; i >= 0; i--) {
		if (s->stk[i] == x) {
			return i;
		}
	}
	return -1;
}

void Print(const IntStack *s) {
	int i;
	for (i = 0; i < s->ptr; i++) {
		cout << s->stk[i] << " ";
	}
	cout << endl;
}


void Terminate(IntStack *s) {
	if (s->stk != nullptr) {
		free(s->stk);
	}
	s->max = s->ptr = 0;
}
// 책에서 구현된 구조체와 함수 끝


int main() {
	IntStack* s = new IntStack;
	int len;
	cout << "int 스택의 갯수를 정해주세요." << endl;
	cin >> len;
	Initialize(s, len);
	int command, x;
	do {
		cout << "0.종료\n1.Push\n2.Pop\n3.Peek\n4.Clear\n5.Capacity\n6.Size\n7.IsEmpty\n8.IsFull\n9.Print\n";
		cin >> command;
		switch (command) {
		case 0:
			break;
		case 1:
			cout << "값을 입력해 주세요." << endl;
			cin >> x;
			Push(s, &x);
			break;
		case 2:
			Pop(s, &x);
			cout << x << endl;
			break;
		case 3:
			Peek(s, &x);
			cout << x << endl;
			break;
		case 4:
			Clear(s);
			break;
		case 5:
			cout << Capacity(s) << endl;
			break;
		case 6:
			cout << Size(s) << endl;
			break;
		case 7:
			cout << IsEmpty(s) << endl;
			break;
		case 8:
			cout << IsFull(s, len) << endl;
			break;
		case 9:
			Print(s);
			break;
		}
	} while (command != 0);
	Terminate(s);
	delete s;
	cout << "스택 삭제가 완료되었습니다." << endl;
	return 0;
}
