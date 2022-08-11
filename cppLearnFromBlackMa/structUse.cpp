#include "structUse.h"


void learnStruct() {
	struct Tt t1;
	t1.id = 0;
	t1.name = "ff";

	Tt t2
	{
		1,"ww"
	};

	printTt(t1);
	printTt(t2);

	//Tt arrTt0[3] = {};
	//struct 
		Tt arrTt0[3] = {
		{2,"ui"},
		{3,"uig"},
		{4,"uih"},
	};

	for (int i = 0; i < sizeof(arrTt0)/ sizeof(arrTt0[0]); i++)
	{
		printTt(arrTt0[i]);
	}

	usePointByStruct();
}

void usePointByStruct() {
	Tt t6 = { 1,"fdsa" };
	Tt* pT6 = &t6;

	pT6->id;

	//cout << " % : " << 1000 % 100 << endl;
	cout << " 通过指针访问结构体变量 :  t6.id = " <<pT6->id << endl;
}

void printTt(Tt t) {
	cout << "struct Tt 的id : " << t.id << " ,name : " << t.name << endl;
}