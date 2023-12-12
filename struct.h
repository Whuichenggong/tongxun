#pragma once
#include<iostream>
using namespace std;
#include<string>
#define Max 1000//数组所容纳的最多人数
struct person//联系人结构体
{
	string m_name;
	int m_sex;
	int m_age;
	string m_phone;
	string m_addres;
};
struct Addressbook
{
	struct person  personAdreesbookarry[Max];//保存联系人的数组
	int m_size=0;//联系人的编号数


};

string name;
int sex;
int select;
void addperon(Addressbook* ptr)//()内传入的东西是通讯录的结构体
{
	if (ptr->m_size == Max) {
		cout << "通讯录都几把爆了你还加你妈呢" << endl;
	}
	else {
		//开始添加联系人

		cout << "请输入联系人的姓名" << endl;
		cin >> name;
		ptr->personAdreesbookarry[ptr->m_size].m_name=name;
		//cout << "请输入你的性别" <<"你是不是南通" << endl;
		//cout << "1.MAN"<<endl<<"or" <<endl<< "2.WOMEN" << endl;
		//while (true)
		//{
		//	ShowMenu();

		//	cin >> select;

		//	switch (select) {

		//	case 1://添加联系人
		//		void addperson();
		//		break;
		//	case 2:
		//		break;
		//	case 3:
		//		break;
		//	case 4:6666
		//		break;
		//	case 5:
		//		break;
		//	case 6:
		//		break;
		//	case 0:
		//		cout << "快滚吧你后都不要用这个系统了" << endl;//退出系统
		//		system("pause");
		//	}
		//	if (sex == 1 || sex == 2)
		//	{
		//		ptr->personAdreesbookarry[ptr->m_size].m_sex = sex;

		//	}
		//	system("pause");


		//}




	}



}

