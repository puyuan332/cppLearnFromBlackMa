#include "pointUse.h"


void lookPoint() {
	cout << "------------------------------------" << endl;
	cout << "��ӭ����ָ��ģ��" << endl;
	int a = 10;
	int* p;

	p = &a;
	cout << "a�ĵ�ַ : " << &a << endl;
	cout << "ָ����� : " << p << endl;

	cout << "*p : " << *p << endl;
	cout << "ָ��Pռ�õ��ڴ�ռ�: " << sizeof(p) << endl;


	//����ָ��: ����ָ��ͬ��ַ,����ֵ���ܸ�
	int b = 10;
	int b1 = 10;
	int b3 = 20;
	const int* p1 = &b;
	p1 = &b1;
	p1 = &b3;

	cout << "p1 ��ֵ : " << *p1 << endl;
	//���� : �����޸�ֵ *p1 = 20;
	//ָ�볣��:����ָ��ͬ��ַ,�����޸�ֵ
	int c = 10;
	int c2 = 20;
	int* const p2 = &c;
	*p2 = 20;

	cout << "c = " << c << endl;
	//����: ָ�볣������ָ��ͬ��ַ,p2 = &c2;

	//������ָ��,�����γ���,���ǼȲ��ܸı�ָ��,�ֲ��ܸı�ֵ
	int d = 10;
	int d2 = 20;
	const int* const p3 = &d;

	//����ָ���������
	int arr0[5] = { 1,2,3,4,5 };

	int* pArr = arr0;

	cout << (int)arr0 << endl;
	cout << (int)pArr << endl;
	pArr[2] = 13;
	cout << pArr[2] << endl;

	cout << *pArr << endl;

	//cout << "����arr0���� : " << sizeof(*pArr) << endl;
	
	cout << ++ * pArr << endl;
	cout << ++ * pArr << endl;

	int aa0 = 10;
	int aa1 = 20;
	cout << "��ʼֵ: aa0 = " << aa0 << endl;
	cout << "��ʼ��ַ: aa0 = " << &aa0 << endl;
	cout << "��ʼֵ: aa1 = " << aa1 << endl;
	cout << "��ʼ��ַ: aa1 = " << &aa1 << endl;

	swapByPoint(&aa0, &aa1);
	cout << "�滻��: aa0 = " << aa0 << endl;
	cout << "�滻���ַ: aa0 = " <<&aa0 << endl;  
	cout << "�滻��: aa1 = " << aa1 << endl;
	cout << "�滻���ַ: aa1 = " << &aa1 << endl;
	cout << "�˳�ָ��ģ��" << endl;

	int ccc = 22;
	int& ccc2 = ccc;
	ccc2 = 30;

	cout << ccc << endl;
	cout << "------------------------------------" << endl;
}

void swapByPoint(int* p1,int* p2 ) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}