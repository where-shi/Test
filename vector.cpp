#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
#include<vector>
void print(vector<int>&v)
{
	for (vector<int>::iterator vt = v.begin(); vt != v.end(); vt++)
	{
		cout << *vt << " ";

	}cout << endl;

}
int main()
{
	////����
	//vector<int>v1;
	//for (int i = 0; i < 10; i++)
	//{
	//	v1.push_back(i);
	//}
	//print(v1);
	////���췽��2
	//vector<int>v2(v1.begin(), v1.end());
	//print(v2);
	////n��elemf��ʽ����
	//vector<int>v3(10, 100);//��һ���Ǹ������ڶ����Ǹ�ֵ
	//print(v3);
	////��������
	//vector<int>v4(v3);
	//print(v4);
	//--------------------------------------------------------------------------------------------
	////��ֵ
	//vector<int>v1;
	//v1 = { 1,2,3,4,5 };
	//print(v1);
	//vector<int>v3;
	//v3.assign(v1.begin(), v1.end());
	//v3.assign(10, 100);
	//print(v3);
	//-------------------------------------------------------------------------------------
	/////�����ʹ�С
	////
	//vector<int>v1(10, 100);
	//if (v1.empty())
	//{
	//	cout << "�յ�" << endl;
	//	
	//}
	//else {
	//	cout << "��Ϊ��" << endl;
	//	cout << "������" << v1.capacity() << endl;
	//	cout << "��С�Ƕ���" << v1.size() << endl;
	//}
	//v1.resize(15,100);//��������ֵ��Ĭ��Ϊ0
	//print(v1);
	//cout << "������" << v1.capacity() << endl;
	//v1.resize(5);//��ԭ���̾ͻ�ɾ������Ĳ���
	//print(v1);
	//----------------------------------------------------------------------------------------
	//�����ɾ��
	vector<int>v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(15);
	v1.push_back(16);
	v1.push_back(18);
	print(v1);
	//......
	//��������
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v2.push_back(i);
	}
	v1.swap(v2);
	print(v1);
	print(v2);
}