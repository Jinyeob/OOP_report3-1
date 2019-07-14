#pragma once
#include <iostream>
using namespace std;

class BaseArray { //�⺻Ŭ����
private:
	int capacity;//�迭�� ũ��
	int *mem; //���� �迭�� ����� ���� �޸��� ������
protected:
	BaseArray(int capacity = 100) { //������
		this->capacity = capacity;
		mem = new int[capacity];
	}
	~BaseArray() { delete[] mem; } //�Ҹ���
	void put(int index, int val) { mem[index] = val; } //�迭�� �Է��� �Լ�
	int get(int index) { return mem[index]; } //�迭 ����
	int getCapacity() { return capacity; } //�뷮 ����
};