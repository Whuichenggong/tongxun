
#include<iostream>
using namespace std;
#define Max 1000
int select;
struct person//��ϵ�˽ṹ��
{
	string m_name;
	int m_sex;
	int m_age;
	string m_phone;
	string m_addres;
};
struct Addressbooks
{
	struct person  personarry[Max];//������ϵ�˵�����
	int size;//��ϵ�˵ı����
};
void addperon(Addressbooks* abs)//()�ڴ���Ķ�����ͨѶ¼�Ľṹ��
{
	if (abs->size == Max) {
		cout << "ͨѶ¼MANLE" << endl;
		return;
	}
	else {
		int sex = 0;
		//��ʼ�����ϵ��
		string name;
		cout << "��������ϵ�˵�����" << endl;
		cin >> name;
		abs->personarry[abs->size].m_name = name;
		cout << "��������˵��Ա��ǣ�" << endl;
		cout << "1--man" << endl;
		cout << "2--women" << endl;
		while(true)//������������ȡ������1����2��breakʹ֮����ѭ��
		{ //����������������������
			cin >> sex;
			if (sex == 1 || sex == 2)
		{
			abs->personarry[abs->size].m_sex = sex;
			break;
		} 
			cout << "���������������������" << endl;
		}
		cout << "����������" << endl;//��������
		int age = 0;
		cin >> age;
		abs->personarry[abs->size].m_age = age;
		//�绰
		cout << "������绰����" << endl;
		string phone;
		cin >> phone;
		abs->personarry[abs->size].m_phone = phone;
		//��ͥסַ
		cout << "�������ͥסַ" << endl;
		string address;
		cin >> address;
		abs->personarry[abs->size].m_addres = address;
		//����ͨѶ¼����
		abs->size++;
		cout << "����ӳɹ���" << endl;
		system("pause");//�밴���������
		system("cls");//�����Ļ����������ʾ���˵�
	}
}

//��ʾ��ϵ�˺���
void showperson(Addressbooks* str)
{
	if (str->size == 0)
	{
		cout << "����ͨѶ¼�տ���Ҳ���뿴ʲô" << endl;
	}
	else {
		for (int i = 0; i < str->size; i++)
		{
			cout << "���� " << str->personarry[i].m_name << endl;
			cout << "�Ա� " << str->personarry[i].m_sex << endl;
			cout << "����" << str->personarry[i].m_age << endl;
			cout << "�绰����" << str->personarry[i].m_phone << endl;
			cout << "��ͥסַ" << str->personarry[i].m_addres << endl;
		}
		system("pause");
		system("cls");
	}

}
//�����ϵ���Ƿ����
int isExist(Addressbooks* abs, string name)
{
	for (int i = 0; i < abs->size; i++)
		if (abs->personarry[i].m_name == name)
			return i; //��˼���ҵ���
	return -1;
}

