#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class A {
public:
	int a;

	// 单参数的构造函数承担两个角色 
	// 1、用于单参数的类对象构造
	// 2、隐含的类型转换操作符，即从int类型转换为A类型
	explicit A(int x) {
		a = x;
	}
};

class B {
public:
	int b;

	// 单参数的构造函数承担两个角色 
	// 1、用于单参数的类对象构造
	// 2、隐含的类型转换操作符，即从int类型转换为A类型
	B(int x) {
		b = x;
	}

	B():b(0) {}
};

int main() {
	A str1(24);
	A str2 = 10; // 报错，不存在从int到A的类型转换

	B str3(5); // 正确
	B str4 = 6; // 正确

	// 没有定义无参数的构造函数，由于用户定义了构造函数，
	// 因此C++系统不会为其自动生成一个无参数的构造函数
	A str5; // 报错，不存在A类的默认构造函数
	B str6; // 正确

	return 0;
}











