#include<iostream>
#include<deque>
#include<algorithm>
#include<vector>
#include<string>
#include<list>
#include<set>
#include<map>
#include<functional>
#include<time.h>
#include<numeric>
#define SALE_DEPATMENT 1
#define DEVELP_DEPATMENT 2
#define FINACIAL_DEPATMENT 3
using namespace std;
//void PrintVector(int v)
//{
//	cout << v << endl;
//}
//void test1()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	vector<int>::iterator pbegin = v.begin();
//	vector<int>::iterator plast = v.end();
//	for_each(v.begin(), v.end(), PrintVector);
//}
//class person
//{
//public:
//	person(int age,int id):age(age),id(id){}
//	int age;
//	int id;
//};
//void test2()
//{
//	vector<person>v;
//	person p1(10, 20), p2(30, 40), p3(50, 60);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	for (vector<person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << (*it).age << "  " << (*it).id << endl;
//	}
//}


//void test1()
//{
//	int arr[] = { 10,20,30,40,50 };
//	vector<int>v(arr, arr + sizeof(arr) / sizeof(int));
//	for (vector<int>::iterator pr = v.begin(); pr != v.end(); pr++)
//	{
//		cout << *pr << "    ";
//	}
//	cout <<endl<< "size: " << v.size() << endl;
//	if (v.empty())
//	{
//		cout << "empty";
//	}
//	else
//	{
//		cout << "no empty";
//	}
//}
//void test2()
//{
//	int arr[] = { 10,20,30,40,50 };
//	vector<int>v(arr, arr + sizeof(arr) / sizeof(int));
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i]<<"  ";
//	}
//
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v.at(i)<<"  ";
//	}
//}
//void test3()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(20);
//	v.insert(v.begin(),30);
	v.insert(v.end(), 40);
	v.insert(v.begin() + 2, 100);
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << "  ";
//	}
//	v.erase(v.begin());
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << "  ";
//	}
//	v.erase(v.begin() + 1, v.end());
//	v.clear();
//}
//void test4()
//{
//	vector<int>v;
//	v.reserve(10000);
//	for (int i = 0; i < 10000; i++)
//	{
//		v.push_back(i);
//	}
//	cout << "size" << v.size() << endl << "capacity" << v.capacity() << endl;
//	v.resize(10);
//	cout << "size" << v.size() << endl << "capacity" << v.capacity() << endl;
//	vector<int>(v).swap(v);
//	cout << "size" << v.size() << endl << "capacity" << v.capacity() << endl;
//}
/////////////////////////////////////////////////////////////////////////////////vector//////////////////////////////////////////////////////////////////////////////////////////////

//void PrintDeque(deque<int>&d)
//{
//	for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << "    ";
//	}
//	cout << endl;
//}

//void test1()
//{
//	deque<int>d1;
//	deque<int>d2(10, 5);
//	deque<int>d3(d2.begin(), d2.end());
//	deque<int>d4(d3);
//	PrintDeque(d4);
//}
//
//void test2()
//{
//	deque<int>d;
//	d.push_back(10);
//	d.push_front(20);
//	d.push_front(30);
//	d.push_back(40);
//	d.push_back(50);
//	d.push_front(60);
//	PrintDeque(d);
//	d.pop_front;
//	d.pop_back;
//}
//void PrintScore(int s)
//{
//	cout << s<<"  ";
//}
//class player
//{
//public:
//	player() {};
//	player(string name, int score) :mName(name), mScore(score) {};
//public:
//	string mName;
//	int mScore;
//};
//
//void Creat_Player(vector<player>&v)
//{
//	string NAME = "ABCDE";
//	for (int i = 0; i < 5; i++)
//	{
//		player p;
//		p.mName = "选手";
//		p.mName += NAME[i];
//		v.push_back(p);
//	}
//}
//void Set_Score(vector<player> &v)
//{
//	for (vector<player>::iterator it=v.begin();it!=v.end();it++)
//	{
//		deque<int>dScore;
//		for (int i = 0; i < 10; i++)
//		{
//			int score = rand() % 101 + 0;
//			dScore.push_back(score);
//		}
//		sort(dScore.begin(), dScore.end());
//		dScore.pop_back();
//		dScore.pop_front();
//		int tot = 0;
//		for (deque<int>::iterator dit = dScore.begin(); dit != dScore.end(); dit++)
//		{
//			tot += (*dit);
//		}
//		int average = tot / dScore.size();
//		(*it).mScore = average;
//	}
//}
//
//bool mycomper(player &p1, player&p2)
//{
//	return p1.mScore < p2.mScore;
//}
//void Player_Rank(vector<player>&v)
//{
//	sort(v.begin(), v.end(), mycomper);
//	for (vector<player>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "name: " << (*it).mName << "   " << "score: " << (*it).mScore<<endl;
//	}
//}
//////////////////////////////////////////////////////////////deque///////////////////////////////////


//void test1()
//{
//	list<int>mlist1;
//	list<int>mlist2(10, 2);
//	list<int>mlist3(mlist2);
//	list<int>mlist4(mlist2.begin(), mlist2.end());
//	for (list<int>::iterator it = mlist4.begin(); it != mlist4.end(); it++)
//	{
//		cout << *it << "  ";
//	}
//}
//
//void test2()
//{
//	list<int>mlist1;
//	mlist1.push_back(100);
//	mlist1.push_front(50);
//	list<int>::iterator it = mlist1.begin();
//	it++;
//	it++;
//	mlist1.insert(it, 500);
//	mlist1.insert(it, 50);
//	mlist1.push_back(50);
//	/*mlist1.pop_back();
//	mlist1.pop_front();
//	mlist1.erase(mlist1.begin(), mlist1.end());*/
//	mlist1.remove(50);
//	for (list<int>::iterator lit = mlist1.begin(); lit != mlist1.end(); lit++)
//	{
//		cout << *lit << "  ";
//	}
//}
//
//void test3()
//{
//	list<int>mlist;
//	for (int i = 0; i < 10; i++)
//	{
//		mlist.push_back(i);
//	}
//	for (list<int>::iterator lit = mlist.begin(); lit != mlist.end(); lit++)
//	{
//		cout << *lit << "  ";
//	}
//	cout << endl;
//	mlist.reverse();
//	for (list<int>::iterator lit = mlist.begin(); lit != mlist.end(); lit++)
//	{
//		cout << *lit << "  ";
//	}
//	cout << endl;
//	
//}
//bool mycompare(int v1, int v2)
//{
//	return v1 > v2;
//}
//void test4()
//{
//	list<int>mlist;
//	mlist.push_back(1);
//	mlist.push_back(5);
//	mlist.push_back(7);
//	mlist.push_back(2);
//	mlist.push_back(9);
//	mlist.push_back(74);
//	mlist.push_back(8);
//	for (list<int>::iterator lit = mlist.begin(); lit != mlist.end(); lit++)
//	{
//		cout << *lit << "  ";
//	}
//	cout << endl;
//	mlist.sort();
//	for (list<int>::iterator lit = mlist.begin(); lit != mlist.end(); lit++)
//	{
//		cout << *lit << "  ";
//	}
//	cout << endl;
//	mlist.sort(mycompare);
//	for (list<int>::iterator lit = mlist.begin(); lit != mlist.end(); lit++)
//	{
//		cout << *lit << "  ";
//	}
//	cout << endl;
//}

///////////////////////////////////////////////////////list/////////////////////////////////////////////////////////////////////
//class mycompare
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//void test1()
//{
//	set<int,mycompare>s;
//	s.insert(1);
//	s.insert(3);
//	s.insert(9);
//	s.insert(4);
//	s.insert(17);
//	s.insert(10);
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << "  ";
//	}
//	cout << endl;
//	
//}
//
//void test2()
//{
//	set<int>s;
//	s.insert(1);
//	s.insert(3);
//	s.insert(9);
//	s.insert(4);
//	s.insert(17);
//	s.insert(10);
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << "  ";
//	}
//	cout << endl;
//
//	set<int>::iterator sit = s.find(0);
//	if (sit == s.end())
//	{
//		cout << "没有找到";
//	}
//	else
//	{
//		cout << *sit;
//	}
//	cout << endl;
//	sit = s.lower_bound(18);
//	if (sit == s.end())
//	{
//		cout << "没有找到";
//	}
//	else
//	{
//		cout << *sit;
//	}
//	cout << endl;
//	sit = s.upper_bound(3);
//	if (sit == s.end())
//	{
//		cout << "没有找到";
//	}
//	else
//	{
//		cout << *sit;
//	}
//	cout << endl;
//
//	pair<set<int>::iterator, set<int>::iterator>mypair = s.equal_range(2);
//	if (mypair.first == s.end())
//	{
//		cout << "没有找到";
//	}
//	else
//	{
//		cout << *(mypair.first);
//	}
//	cout << endl;
//	if (mypair.second == s.end())
//	{
//		cout << "没有找到";
//	}
//	else
//	{
//		cout << *(mypair.second);
//	}
//	cout << endl;
//}
//
//class person
//{
//public:
//	person(int i,int a):id(i),age(a){}
//public:
//	int id;
//	int age;
//};
//class mycompare1
//{
//public:
//	bool operator()(person p1, person p2)
//	{
//		if (p1.id > p2.id)
//		{
//			return true;
//		}
//		else if (p1.id=p2.id)
//		{
//			if (p1.age > p2.age)
//			{
//				return true;
//			}
//			else
//			{
//				return false;
//			}
//		}
//		else
//		{
//			return false;
//		}
//	}
//};
//void test3()
//{
//	set<person, mycompare1>s;
//	person p1(10, 20), p2(10,10), p3(50, 60);
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//	for (set<person, mycompare1>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << (*it).age << "  " << (*it).id << endl;
//	}
//
//}
/////////////////////////////////////////////////////////////////set/////////////////////////////////////////////////////
//void pair1()
//{
//	pair<int, int>p1(10, 20);
//	cout << p1.first << "  " << p1.second;
//	pair<string, int>p2 = make_pair("k1", 10);
//	cout << p2.first << "  " << p2.second;
//}
/////////////////////////////////////////////////////////////////pair//////////////////////////////////////////////////////////////
//void test1()
//{
//	map<int, int>m1;
//	m1.insert(pair<int, int>(10, 10));
//	m1.insert(make_pair(12, 20));
//	m1.insert(map<int, int>::value_type(13, 30));
//	m1[14] = 40;
//	
//	for (map<int, int>::iterator it = m1.begin(); it != m1.end(); it++)
//	{
//		cout << (*it).first << "  " << (*it).second << endl;
//	}
//}

//class Worker
//{
//public:
//	string mName;
//	string mTele;
//	int mAge;
//	int mSalary;
//
//};
//void Create_Worker(vector<Worker> &vWorker)
//{
//	string str = "ABCDE";
//	for (int i = 0; i <5; i++)
//	{
//		Worker worker;
//		worker.mName = "员工";
//		worker.mName += str[i];
//		worker.mAge = rand() % 10 + 20;
//		worker.mTele = "0411-0791";
//		worker.mSalary = rand() % 900000 + 100000;
//		vWorker.push_back(worker);
//	}
//}
//
//void WorkerByGroup(vector<Worker> &vWorker, multimap<int, Worker> &WorkerGroup)
//{
//	for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
//	{
//		int depertid = rand() % 3 + 1;
//		switch (depertid)
//		{
//		case SALE_DEPATMENT:
//			WorkerGroup.insert(make_pair(SALE_DEPATMENT, *it));
//			break;
//		case DEVELP_DEPATMENT:
//			WorkerGroup.insert(make_pair(DEVELP_DEPATMENT, *it));
//			break;
//		case FINACIAL_DEPATMENT:
//			WorkerGroup.insert(make_pair(FINACIAL_DEPATMENT, *it));
//			break;
//		default:
//			break;
//		}
//	}
//}
//void ShowWorkerGroup(multimap<int, Worker> &WorkerGroup, int depertment)
//{
//	map<int, Worker>::iterator it = WorkerGroup.find(depertment);
//	int depertnum = WorkerGroup.count(depertment);
//	int num = 0;
//	for (map<int, Worker>::iterator pos = it; it != WorkerGroup.end() && num < depertnum; num++, pos++)
//	{
//		cout <<pos->first<<"  "<< "name: " << pos->second.mName << "  " << "age: " << pos->second.mAge
//			<< "  " << "tel: " << pos->second.mTele << "  " << "salary: " << pos->second.mSalary << endl;
//	}
//}
//void PrintWorkerByGroup(multimap<int, Worker>&WorkerGroup)
//{
//	cout << "SALE: \n";
//	ShowWorkerGroup(WorkerGroup, SALE_DEPATMENT);
//	cout << "DEVELP\n";
//	ShowWorkerGroup(WorkerGroup, DEVELP_DEPATMENT);
//	cout <<"FINACIAL\n";
//	ShowWorkerGroup(WorkerGroup, FINACIAL_DEPATMENT);
//}
//////////////////////////////////////////////////////////////////map//////////////////////////////////////////////// Myprint
//int num = 0;
//
//struct Myprint
//{
//	Myprint()
//	{
//		num1 = 0;
//	}
//	void operator()(int val) 
//	{
//		num1++;
//		cout << val << endl;
//	}
//	int num1;
//};
//
//void Myprint2(int val)
//{
//	num++;
//	cout << val<<endl;
//}
//
//
//void test1()
//{
//	vector<int>vprint;
//	vprint.push_back(10);
//	vprint.push_back(20);
//	vprint.push_back(30);
//	vprint.push_back(40);
//	for_each(vprint.begin(), vprint.end(), Myprint2);
//	cout << num<<endl;
//	Myprint print;
//	Myprint print2=for_each(vprint.begin(), vprint.end(), print);
//	cout << print.num1;
//	cout << endl << print2.num1;
//}
/////////////////////////////////////////////////////////////仿函数//////////////////////////////////////////////////////////////////
//void test1()
//{
//	/*plus<int>myplus;
//	cout << myplus(10, 20);*/
//}
////////////////////////////////////////////////////////////内建函数////////////////////////////////////////////////////////////////////
//struct Myprint :public binary_function<int, int, void>
//{
//	void operator()(int v, int val)const
//	{
//		cout << v + val << endl;
//	}
//};
//void test()
//{
//	vector<int>vPrint;
//	vPrint.push_back(10);
//	vPrint.push_back(20);
//	vPrint.push_back(30);
//	vPrint.push_back(40);
//	vPrint.push_back(50);
//	int val = 200;
//	for_each(vPrint.begin(), vPrint.end(), bind2nd(Myprint(), val));
//}
////////////////////////////////////////////////////////////////////////////////适配器/////////////////////////////////////////////////////////
//struct m
//{
//	int operator()(int val)
//	{
//		return val;
//	}
//};
//void myprint(int v)
//{
//	cout << v << endl;
//}
//void test()
//{
//	vector<int>v1;
//	vector<int>v2;
//	v2.resize(10);
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	transform(v1.begin(), v1.end(), v2.begin(), m());
//	for_each(v2.begin(), v2.end(), myprint);
//
//}
/////////////////////////////////////////////////////////////////////常用遍历算法//////////////////////////////////////////////
//void test()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	vector<int>::iterator ret = find(v1.begin(), v1.end(), 5);
//	if (ret == v1.end())
//	{
//		cout << "no";
//	}
//	else
//	{
//		cout << "yes";
//	}
//}
//
//class person
//{
//public:
//	person(int Id,int Age):id(Id),age(Age){}
//	bool operator==(const person&p)const
//	{
//		return p.age == this->age && p.id == this->id;
//	}
//public:
//	int id;
//	int age;
//};
//
//void test1()
//{
//	person p1(10,20),p2(30,40),p3(50,60);
//	vector<person>vp;
//	vp.push_back(p1);
//	vp.push_back(p2);
//	vector<person>::iterator ret=find(vp.begin(), vp.end(), p3);
//	if (ret == vp.end())
//	{
//		cout << "no";
//	}
//	else
//	{
//		cout << "yes";
//	}
//}
//
//void test2()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	bool ret=binary_search(v1.begin(), v1.end(), 5);
//	if (ret)
//	{
//		cout << "yes";
//	}
//	else
//	{
//		cout << "no";
//	}
//}
//
//void test3()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	v1.push_back(9);
//	vector<int>::iterator it = adjacent_find(v1.begin(), v1.end());
//	if (it == v1.end())
//	{
//		cout << "no";
//	}
//	else
//	{
//		cout << "yes"<< *it;
//	}
//}
//bool MyFind(int val)
//{
//	int q;
//	for (int i = 2; i < val; i++)
//	{
//		q = val%i;
//		if (q ==0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//void test4()
//{
//	vector<int>v1;
//	for (int i = 10; i < 20; i++)
//	{
//		v1.push_back(i);
//	}
//	vector<int>::iterator it=find_if(v1.begin(), v1.end(), MyFind);
//	if (it == v1.end())
//	{
//		cout << "no";
//	}
//	else
//	{
//		cout << "yes" << *it<<endl;
//	}
//	int num=count_if(v1.begin(), v1.end(), MyFind);
//	cout << "number:" << num;
//}
///////////////////////////////////////////////////////////////////////查找////////////////////////////////////////////////////////
//void MyPrint(int val)
//{
//	cout << val<<"  ";
//}
//bool MyCompare(int v1, int v2)
//{
//	return v1 > v2;
//}
//void test1()
//{
//	srand((unsigned int)time(NULL));
//	vector<int>v1;
//	vector<int>v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(rand() % 10);
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		v2.push_back(rand() % 10);
//	}
//	vector<int>v3;
//	v3.resize(v1.size() + v2.size());
//	sort(v1.begin(), v1.end(), MyCompare);
//	sort(v2.begin(), v2.end(), MyCompare);
//	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin(), MyCompare);
//	for_each(v3.begin(), v3.end(), MyPrint);
//
//}
//void test2()
//{
//	srand((unsigned int)time(NULL));
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(rand() % 10);
//	}
//	for_each(v1.begin(), v1.end(), MyPrint);
//	cout << endl;
//	random_shuffle(v1.begin(), v1.end());
//	for_each(v1.begin(), v1.end(), MyPrint);
//}
//void test3()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	for_each(v1.begin(), v1.end(), MyPrint);
//	cout << endl;
//	reverse(v1.begin(), v1.end());
//	for_each(v1.begin(), v1.end(), MyPrint);
//}
/////////////////////////////////////////////////////////////////////////排序//////////////////////////////////////////////////////
//void MyPrint(int val)
//{
//	cout << val << "  ";
//}
//void test1()
//{
//	
//			srand((unsigned int)time(NULL));
//			vector<int>v1;
//			
//			for (int i = 0; i < 10; i++)
//			{
//				v1.push_back(rand() % 10);
//			}
//			vector<int>v2;
//			v2.resize(v1.size());
//			copy(v1.begin(), v1.end(), v2.begin());
//			for_each(v2.begin(), v2.end(), MyPrint);
//}
//bool MyFind(int val)
//{
//	int q;
//	for (int i = 2; i < val; i++)
//	{
//		q = val % i;
//		if (q == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//void test2()
//{
//	vector<int>v1;
//	for (int i = 10; i < 20; i++)
//	{
//		v1.push_back(i);
//	}
//	for_each(v1.begin(), v1.end(), MyPrint);
//	cout << endl;
//	/*replace(v1.begin(), v1.end(), 15, 1000);
//	for_each(v1.begin(), v1.end(), MyPrint);
//	cout << endl;*/
//	replace_if(v1.begin(), v1.end(), MyFind, 10000);
//	for_each(v1.begin(), v1.end(), MyPrint);
//}
///////////////////////////////////////////////////////////////////拷贝替换//////////////////////////////////////////////
//void MyPrint(int val)
//{
//	cout << val << "  ";
//}
//void test1()
//{
//	vector<int>v1;
//	v1.push_back(15);
//	v1.push_back(65);
//	v1.push_back(55);
//	v1.push_back(45);
//	int n=accumulate(v1.begin(), v1.end(), 0);
//	cout << n;
//	
//	vector<int>v2;
//	v2.resize(10);
//	fill(v2.begin(), v2.end(), 10);
//    for_each(v2.begin(), v2.end(), MyPrint);
//}
///////////////////////////////////////////////////////////////算术///////////////////////////////////////////////















int main()
{

	test1();
	return 0;
}