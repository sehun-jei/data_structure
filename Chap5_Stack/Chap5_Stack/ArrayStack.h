#pragma once
#include <cstdio>
const int MAX_STACK_SIZE = 20;

class ArrayStack
{
	int top;
	int data[MAX_STACK_SIZE];       //�ڷ����� int (������)

public:
	ArrayStack() { top = -1; }
	~ArrayStack() {}
	bool isEmpty() {                                              //bool������ Ʈ��ƴϸ� �޽�
		return top == -1;      //top�� -1�� ������ True, �ٸ��� False ��ȯ
	}
	bool isFull() {
		return top == MAX_STACK_SIZE - 1;
	}
	void push(int e) {
		if (isFull())
			printf("���� ��ȭ ����");
		else                                     //void �� ���� �����ҰԾ����� ���Ͼ���
			data[++top] = e;         //++top �տ� ++������ 1����  1���ϰ� ����~
	}

	int pop() {
		if (isEmpty())
			printf("���� ���� ����");
		
		return data[top--];     // --�� ���� ������ ���Ŀ� ž�� ����
	}

	int peek() {
		if (isEmpty())
			printf("���� ���� ����");

		return data[top];
	}

	void display() {
		printf("���� �׸��� �� = %2d ==>", top + 1);
		for (int i = 0; i <= top; i++)
			printf("<%2d>", data[i]);

		printf("\n");
    }



};