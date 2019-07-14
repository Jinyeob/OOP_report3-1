#include <iostream>
#include "MyStack.h"
using namespace std;

int main() {
	MyStack mStack(100);
	int n;
	cout << "���ÿ� ������ 5���� ������ �Է��϶�>> ";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mStack.push(n);//���ÿ� Ǫ��
	}
	cout << "���ÿ뷮:" << mStack.capacity() << ", ����ũ��: " << mStack.length() << endl;
	cout << "������ ��� ���Ҹ� ���Ͽ� ����Ѵ�>> ";
	while (mStack.length() != 0) {
		cout << mStack.pop() << ' ';//���ÿ��� ��
	}
	cout << endl << "������ ���� ũ��: " << mStack.length() << endl;
	/* 
     stack empty �� ����� ��ʸ� ����� ����� ��
     stack full �� ����� ��ʸ� ����� ����� ��
   */
	cout << "-----------------------------\n";
	cout << "stack full �� ���\n";
	for (int i = 0; i < mStack.capacity(); i++) {
		mStack.push(i);//���ÿ� Ǫ��
		cout << "������ ����ũ��: " << mStack.length() << endl;
		if (mStack.length() == mStack.capacity()) {
			cout << "���ÿ뷮:" << mStack.capacity() << ", ����ũ��: " << mStack.length() << endl;
			cout << "stack full\n";
		}
	}
	cout << "-----------------------------\n";
	cout << "stack empty �� ���\n";
	while (mStack.length() != 0) {
		mStack.pop();//���ÿ��� ��
		cout << endl << "������ ���� ũ��: " << mStack.length() << endl;
		if (mStack.length() == 0) {
			cout << "���ÿ뷮:" << mStack.capacity() << ", ����ũ��: " << mStack.length() << endl;
			cout << "stack empty\n";
		}
	}

}