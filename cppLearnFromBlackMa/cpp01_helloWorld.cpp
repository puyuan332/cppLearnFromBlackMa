#include <iostream>
using namespace std;
//使用#define定义的时宏常量
#define DefineValue 20
/*
*	多行注释
*	多行注释
*/

int createParam() {
	//06 创建变量
	int aa = 10;
	return aa;
}

int main() {
	//单行注释
	
	const int constValue = 15;
	short shortValue = 23;

	cout << "hello world" << endl;
	cout << "constValue = " << constValue << endl;

	cout << "shortValue.size = " << sizeof(shortValue) << endl;
	cout << "a = " << DefineValue << endl;
	system("pause");
	return 0;
}