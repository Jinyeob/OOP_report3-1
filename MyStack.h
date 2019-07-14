#pragma once
#include "BaseArray.h"

class MyStack :public BaseArray { //BaseArray Ŭ���� ���, �Ļ�Ŭ����
private:
	int top; //������ �����ֱ�(�� ��)
public:
	MyStack(int capacity) : BaseArray(capacity) { top = 0; } //������ �ʱ� top=0 
	void push(int n) {
		put(top, n); //���ÿ� Ǫ�� �� ������
		top++; //top 1�� ����
	}
	int capacity() { return getCapacity(); }  //BaseArray�� getCapacity �Լ� ���� (capacity)
	int length() { return top; } //push �Լ����� top++ �� �� ���� (���� ũ��)
	int pop() {
		--top; //���ÿ��� �� �� ������ top 1�� ����
		return get(top); //BaseArray Ŭ������ get�Լ� ȣ�� (mem[top])
	}
};