#include "pointUse.h"


void lookPoint() {
	int a = 10;
	int *p;

	p = &a;
	cout << "a的地址 : " << &a << endl;
	cout << "指针变量 : " << p << endl;

	cout << "*p : " << *p << endl;
	cout <<"指针P占用的内存空间: " << sizeof(p) << endl;


	//常量指针: 可以指向不同地址,但是值不能改
	int b = 10;
	int b1 = 10;
	int b3 = 20;
	const int * p1 = &b;
	p1 = &b1;
	p1 = &b3;

	cout << "p1 的值 : " << *p1 << endl;
	//错误 : 不能修改值 *p1 = 20;
	//指针常量:不能指向不同地址,可以修改值
	int c = 10;
	int c2 = 20;
	int * const p2 = &c;
	*p2= 20;

	cout << "c = " << c << endl;
	//错误: 指针常量不能指向不同地址,p2 = &c2;

	//既修饰指针,又修饰常量,就是既不能改变指向,又不能改变值
	int d = 10;
	int d2 = 20;
	const int* const p3 = &d;





}