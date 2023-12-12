#include<iostream>
using namespace std;
#include"menu.h"//封装显示菜单功能
#include<string>
#include"structt.h"

#define Max 1000//数组所容纳的最多人数

void ShowMenu();//菜单函数的声明








//
//struct person//联系人结构体
//{
//	string m_name;
//	int m_sex;
//	int m_age;
//	string m_phone;
//	string m_addres;
//};
//struct Addressbooks
//{
//	struct person  personarry[Max];//保存联系人的数组
//	int size;//联系人的编号数
//};
//
//
//
//void addperon(Addressbooks* abs)//()内传入的东西是通讯录的结构体
//{
//	if (abs->size == Max) {
//		cout << "通讯录MANLE" << endl;
//		return;
//	}
//	else {
//		//开始添加联系人
//		string name;
//		cout << "请输入联系人的姓名" << endl;
//		cin >> name;666
//		abs->personarry[abs->size].m_name = name;
//	}
//}


int main()
{
	 Addressbooks abs;
	abs.size = 0;
	
	
	int select;
	while (true) {
		ShowMenu();
		cin >> select;
		switch(select) {

		case 1://添加联系人
		addperon(&abs);
			break;
		case 2://显示添加的联系人
			showperson(&abs);
			break;
		case 3://删除联系人
			cout << "请输入你要删除人的名字" << endl;
			string name;
			cin >> name;
			break;
		case 4://查找联系人
			break;
		case 5:
			break;
		case 6:
			break;
		case 0:
			cout << "快滚吧你像一个狗一样" << endl;//退出系统
			system("pause");
			return 0;
		}

	}
			
		
	
}