#include<iostream>
using namespace std;
#include"menu.h"//��װ��ʾ�˵�����
#include<string>
#include"structt.h"

#define Max 1000//���������ɵ��������

void ShowMenu();//�˵�����������








//
//struct person//��ϵ�˽ṹ��
//{
//	string m_name;
//	int m_sex;
//	int m_age;
//	string m_phone;
//	string m_addres;
//};
//struct Addressbooks
//{
//	struct person  personarry[Max];//������ϵ�˵�����
//	int size;//��ϵ�˵ı����
//};
//
//
//
//void addperon(Addressbooks* abs)//()�ڴ���Ķ�����ͨѶ¼�Ľṹ��
//{
//	if (abs->size == Max) {
//		cout << "ͨѶ¼MANLE" << endl;
//		return;
//	}
//	else {
//		//��ʼ�����ϵ��
//		string name;
//		cout << "��������ϵ�˵�����" << endl;
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

		case 1://�����ϵ��
		addperon(&abs);
			break;
		case 2://��ʾ��ӵ���ϵ��
			showperson(&abs);
			break;
		case 3://ɾ����ϵ��
			cout << "��������Ҫɾ���˵�����" << endl;
			string name;
			cin >> name;
			break;
		case 4://������ϵ��
			break;
		case 5:
			break;
		case 6:
			break;
		case 0:
			cout << "���������һ����һ��" << endl;//�˳�ϵͳ
			system("pause");
			return 0;
		}

	}
			
		
	
}