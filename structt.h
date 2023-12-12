
#include<iostream>
using namespace std;
#define Max 1000
int select;
struct person//联系人结构体
{
	string m_name;
	int m_sex;
	int m_age;
	string m_phone;
	string m_addres;
};
struct Addressbooks
{
	struct person  personarry[Max];//保存联系人的数组
	int size;//联系人的编号数
};
void addperon(Addressbooks* abs)//()内传入的东西是通讯录的结构体
{
	if (abs->size == Max) {
		cout << "通讯录MANLE" << endl;
		return;
	}
	else {
		int sex = 0;
		//开始添加联系人
		string name;
		cout << "请输入联系人的姓名" << endl;
		cin >> name;
		abs->personarry[abs->size].m_name = name;
		cout << "您输入的人的性别是？" << endl;
		cout << "1--man" << endl;
		cout << "2--women" << endl;
		while(true)//如果输入的是争取的数字1或者2则break使之跳出循环
		{ //如果输入的有误则重新输入
			cin >> sex;
			if (sex == 1 || sex == 2)
		{
			abs->personarry[abs->size].m_sex = sex;
			break;
		} 
			cout << "你输入的有误请重新输入" << endl;
		}
		cout << "请输入年龄" << endl;//年龄输入
		int age = 0;
		cin >> age;
		abs->personarry[abs->size].m_age = age;
		//电话
		cout << "请输入电话号码" << endl;
		string phone;
		cin >> phone;
		abs->personarry[abs->size].m_phone = phone;
		//家庭住址
		cout << "请输入家庭住址" << endl;
		string address;
		cin >> address;
		abs->personarry[abs->size].m_addres = address;
		//更新通讯录人数
		abs->size++;
		cout << "你添加成功了" << endl;
		system("pause");//请按任意键继续
		system("cls");//清空屏幕操作，并显示出菜单
	}
}

//显示联系人函数
void showperson(Addressbooks* str)
{
	if (str->size == 0)
	{
		cout << "您的通讯录空空如也你想看什么" << endl;
	}
	else {
		for (int i = 0; i < str->size; i++)
		{
			cout << "姓名 " << str->personarry[i].m_name << endl;
			cout << "性别 " << str->personarry[i].m_sex << endl;
			cout << "年龄" << str->personarry[i].m_age << endl;
			cout << "电话号码" << str->personarry[i].m_phone << endl;
			cout << "家庭住址" << str->personarry[i].m_addres << endl;
		}
		system("pause");
		system("cls");
	}

}
//检测联系人是否存在
int isExist(Addressbooks* abs, string name)
{
	for (int i = 0; i < abs->size; i++)
		if (abs->personarry[i].m_name == name)
			return i; //意思是找到了
	return -1;
}

