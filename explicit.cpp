#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class A {
public:
	int a;

	// �������Ĺ��캯���е�������ɫ 
	// 1�����ڵ��������������
	// 2������������ת��������������int����ת��ΪA����
	explicit A(int x) {
		a = x;
	}
};

class B {
public:
	int b;

	// �������Ĺ��캯���е�������ɫ 
	// 1�����ڵ��������������
	// 2������������ת��������������int����ת��ΪA����
	B(int x) {
		b = x;
	}

	B():b(0) {}
};

int main() {
	A str1(24);
	A str2 = 10; // ���������ڴ�int��A������ת��

	B str3(5); // ��ȷ
	B str4 = 6; // ��ȷ

	// û�ж����޲����Ĺ��캯���������û������˹��캯����
	// ���C++ϵͳ����Ϊ���Զ�����һ���޲����Ĺ��캯��
	A str5; // ����������A���Ĭ�Ϲ��캯��
	B str6; // ��ȷ

	return 0;
}











