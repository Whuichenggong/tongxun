#pragma once
#include<iostream>
using namespace std;
#include<string>
#define Max 1000//���������ɵ��������
struct person//��ϵ�˽ṹ��
{
	string m_name;
	int m_sex;
	int m_age;
	string m_phone;
	string m_addres;
};
struct Addressbook
{
	struct person  personAdreesbookarry[Max];//������ϵ�˵�����
	int m_size=0;//��ϵ�˵ı����


};

string name;
int sex;
int select;
void addperon(Addressbook* ptr)//()�ڴ���Ķ�����ͨѶ¼�Ľṹ��
{
	if (ptr->m_size == Max) {
		cout << "ͨѶ¼�����ѱ����㻹��������" << endl;
	}
	else {
		//��ʼ�����ϵ��

		cout << "��������ϵ�˵�����" << endl;
		cin >> name;
		ptr->personAdreesbookarry[ptr->m_size].m_name=name;
		//cout << "����������Ա�" <<"���ǲ�����ͨ" << endl;
		//cout << "1.MAN"<<endl<<"or" <<endl<< "2.WOMEN" << endl;
		//while (true)
		//{
		//	ShowMenu();

		//	cin >> select;

		//	switch (select) {

		//	case 1://�����ϵ��
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
		//		cout << "�������󶼲�Ҫ�����ϵͳ��" << endl;//�˳�ϵͳ
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

