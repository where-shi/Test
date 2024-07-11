#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<deque>
#include<algorithm>
#include<string>
using namespace std;
class Player
{
	
public:
	Player(string name, int score)
	{
		this->name = name;
		this->score = score;
	}
	//平均分赋值
	void Judging(int score)
	{
		this->score = score;
	}
	string getName()
	{
		return name;
	}
	int getScore()
	{
		return score;
	}
private:
	string name;
	int score;
};
//求每位选手的打分完的平均分
int adv_score( Player& p)
{
	deque<int>d1;
	int score;
	
	for (int i = 0; i < 10; i++)
	{
		score = rand() % 41 + 60;//随机60~100分数
		d1.push_back(score);
	}
	sort(d1.begin(), d1.end());
	d1.pop_back();
	d1.pop_front();//删除最大和最小的分数
	//在累加总分
	int sum = 0;
	for (deque<int>::iterator it = d1.begin(); it != d1.end(); it++)
	{
		sum += *it;
	}
	return sum / 8;//返回平均分
}
void printPlayer( Player& p)
{
	cout << "选手姓名：" << p.getName() << " 选手最终得分： " << p.getScore() << endl;
}
int main()
{
	//添加随机数种子
	srand((unsigned int)time(NULL));
	Player p1("shi", 0);
	Player p2("Li", 0);
	Player p3("Hua", 0);
	Player p4("Nono", 0);
	Player p5("nbk", 0);
	//创建容器
	vector<Player>v1;
	v1.push_back(p1);
	v1.push_back(p2);
	v1.push_back(p3);
	v1.push_back(p4);
	v1.push_back(p5);
	for (vector<Player>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		printPlayer(*it);
	}
	for (vector<Player>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		(*it).Judging(adv_score(*it));//给每个选手赋上平均分
	}
	cout << "赋分中···" << endl;
	for (vector<Player>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		printPlayer(*it);//打印每位选手最终成绩
	}
//尝试一下能不能修改
}
