#include<iostream>
using namespace std;

typedef unsigned int (*FunPr) (unsigned int);

unsigned int SumLast(unsigned int n)
{
	return 0;
}

unsigned int SumFlow(unsigned int n)
{
	static FunPr f[2]={SumLast, SumFlow};
	return n+f[!!n](n-1);
}

void main()
{
	int Num = 100;
	cout<<"The sum is:"<<SumFlow(Num)<<endl;
}
