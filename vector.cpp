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
	////构造
	//vector<int>v1;
	//for (int i = 0; i < 10; i++)
	//{
	//	v1.push_back(i);
	//}
	//print(v1);
	////构造方法2
	//vector<int>v2(v1.begin(), v1.end());
	//print(v2);
	////n个elemf方式构造
	//vector<int>v3(10, 100);//第一个是个数，第二个是赋值
	//print(v3);
	////拷贝构造
	//vector<int>v4(v3);
	//print(v4);
	//--------------------------------------------------------------------------------------------
	////赋值
	//vector<int>v1;
	//v1 = { 1,2,3,4,5 };
	//print(v1);
	//vector<int>v3;
	//v3.assign(v1.begin(), v1.end());
	//v3.assign(10, 100);
	//print(v3);
	//-------------------------------------------------------------------------------------
	/////容量和大小
	////
	//vector<int>v1(10, 100);
	//if (v1.empty())
	//{
	//	cout << "空的" << endl;
	//	
	//}
	//else {
	//	cout << "不为空" << endl;
	//	cout << "容量是" << v1.capacity() << endl;
	//	cout << "大小是多少" << v1.size() << endl;
	//}
	//v1.resize(15,100);//不添加填充值，默认为0
	//print(v1);
	//cout << "容量是" << v1.capacity() << endl;
	//v1.resize(5);//比原来短就会删除多余的部分
	//print(v1);
	//----------------------------------------------------------------------------------------
	//插入和删除
	vector<int>v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(15);
	v1.push_back(16);
	v1.push_back(18);
	print(v1);
	//......
	//容器互换
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v2.push_back(i);
	}
	v1.swap(v2);
	print(v1);
	print(v2);
}