#include <iostream>

using namespace std;

typedef struct {
	int max;
	int ptr;
	int *stk;
} IntStack;

int* Initialize_Front(IntStack *s, int max) {
	s->ptr = 0;
	if ((s->stk == calloc(max * 2, sizeof(int))) == NULL) {
		s->max = 0;
		return NULL;
	}
	s->max = max;
	return s->stk;
}

int* Initialize_Back(IntStack *s, int max, int* Front) {
	s->ptr = 0;
	if (Front == NULL) {
		s->max = 0;
		return -1;
	}
	s->max = max;
	return s->stk + max * 2 - 1;
}

int Push_Front(IntStack *s, int *x) {
	if (s->ptr >= s->max) {
		return -1;
	}
	s->stk[s->ptr++] = *x;
	return 0;
}

int Push_Back(IntStack *s, int *x) {
	if (s->ptr >= s->max) {
		return -1;
	}
	s->stk[s->ptr--] = *x;
	return 0;
}

int Pop_Front(IntStack *s, int *x) {
	if (s->ptr <= 0) {
		return -1;
	}
	*x = s->stk[--s->ptr];
	return 0;
}

int Pop_Back(IntStack *s, int *x) {
	if (s->ptr <= 0) {
		return -1;
	}
	*x = s->stk[++s->ptr];
	return 0;
}

void Terminate(IntStack *s) {
	if (s->stk != nullptr) {
		free(s->stk);
	}
	s->max = s->ptr = 0;
}

int main() {
	IntStack* s1 = new IntStack;
	IntStack* s2 = new IntStack;
	int len = 5;
	Initialize_Front(s1, len);
	Initialize_Back(s2, len, s1->stk);
	int k = 1;
	for(int i=0;i<5;i++) {
		Push_Front(s1, &k);
	}
	for(int i=0;i<5;i++) {
		Push_back(s2, &k);
	}
	for(int i=0;i<5;i++) {
		Pop_Front(s1, &k);
	}
	for(int i=0;i<5;i++) {
		Pop_Back(s2, &k);
	}
	Terminate(s1);
	delete s1;
	delete s2;
	cout << "스택 삭제가 완료되었습니다." << endl;
	return 0;
}
