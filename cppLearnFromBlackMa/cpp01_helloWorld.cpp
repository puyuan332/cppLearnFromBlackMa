#include <iostream>
using namespace std;
//ʹ��#define�����ʱ�곣��
#define DefineValue 20
/*
*	����ע��
*	����ע��
*/

int createParam() {
	//06 ��������
	int aa = 10;
	return aa;
}

int main() {
	//����ע��
	
	const int constValue = 15;
	short shortValue = 23;

	cout << "hello world" << endl;
	cout << "constValue = " << constValue << endl;

	cout << "shortValue.size = " << sizeof(shortValue) << endl;
	cout << "a = " << DefineValue << endl;
	system("pause");
	return 0;
}