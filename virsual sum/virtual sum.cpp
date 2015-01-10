#include<iostream>
using namespace std;
class A;
A* Array[2];

class A
{
public:
	virtual int Sum(int n){return 0;}
};

class B: public A
{
public:
	virtual int Sum(int n){ return Array[!!n]->Sum(n-1)+n ;}
};

void main()
{
	A a;
	B b;
	//A* Array;
	Array[0] = &a;
	Array[1] = &b;

	int value = Array[1]->Sum(100);
	cout<<"value =" << value <<endl;
}