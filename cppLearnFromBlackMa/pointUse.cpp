#include "pointUse.h"


void lookPoint() {
	int a = 10;
	int *p;

	p = &a;
	cout << "a�ĵ�ַ : " << &a << endl;
	cout << "ָ����� : " << p << endl;

	cout << "*p : " << *p << endl;
	cout <<"ָ��Pռ�õ��ڴ�ռ�: " << sizeof(p) << endl;


	//����ָ��: ����ָ��ͬ��ַ,����ֵ���ܸ�
	int b = 10;
	int b1 = 10;
	int b3 = 20;
	const int * p1 = &b;
	p1 = &b1;
	p1 = &b3;

	cout << "p1 ��ֵ : " << *p1 << endl;
	//���� : �����޸�ֵ *p1 = 20;
	//ָ�볣��:����ָ��ͬ��ַ,�����޸�ֵ
	int c = 10;
	int c2 = 20;
	int * const p2 = &c;
	*p2= 20;

	cout << "c = " << c << endl;
	//����: ָ�볣������ָ��ͬ��ַ,p2 = &c2;

	//������ָ��,�����γ���,���ǼȲ��ܸı�ָ��,�ֲ��ܸı�ֵ
	int d = 10;
	int d2 = 20;
	const int* const p3 = &d;





}