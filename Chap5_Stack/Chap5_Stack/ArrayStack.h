#pragma once
#include <cstdio>
const int MAX_STACK_SIZE = 20;

class ArrayStack
{
	int top;
	int data[MAX_STACK_SIZE];       //자료형이 int (정수형)

public:
	ArrayStack() { top = -1; }
	~ArrayStack() {}
	bool isEmpty() {                                              //bool형식은 트루아니면 펄스
		return top == -1;      //top과 -1이 같으면 True, 다르면 False 반환
	}
	bool isFull() {
		return top == MAX_STACK_SIZE - 1;
	}
	void push(int e) {
		if (isFull())
			printf("스택 포화 에러");
		else                                     //void 가 오면 리턴할게없으니 리턴없음
			data[++top] = e;         //++top 앞에 ++있으면 1더함  1더하고 값을~
	}

	int pop() {
		if (isEmpty())
			printf("스택 공백 에러");
		
		return data[top--];     // --는 값을 리턴한 이후에 탑을 뺴기
	}

	int peek() {
		if (isEmpty())
			printf("스택 공백 에러");

		return data[top];
	}

	void display() {
		printf("스택 항목의 수 = %2d ==>", top + 1);
		for (int i = 0; i <= top; i++)
			printf("<%2d>", data[i]);

		printf("\n");
    }



};