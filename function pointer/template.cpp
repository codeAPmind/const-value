
#include<iostream>
using namespace std;
template <class T1,class T2>
class AAA
{
private:
	T1  x;
	T2  y;
public:
	AAA(T1  a, T2  b) {x = a; y = b;}
	void myShow()
	{
		cout<< (x>y?x:y)<<endl;
	}
};

void main()
{
	int  a=1;
	float  b = 2.0;
	(++a)+=(a++);
	a = 1;
	a+= (a++);
	AAA<int,float> m(a,b);
	m.myShow();
}
/*

#include <iostream>  
using namespace std;
template <class T1, class T2>    //使用2个类型参数  
class MyTemClass                 //定义类模板  
{  
    private:  
        T1 x;  
        T2 y;  
    public:  
        MyTemClass(T1 a, T2 b) {x=a; y=b;}    //构造函数  
        void ShowMax()                        //输出最大的数据成员  
        {  
            cout<<"MaxMember="<<(x>=y ? x : y)<<endl;  
        }  
};  
void main()  
{  
    int a=100;  
    float b=123.45F;  
    MyTemClass<int, float> mt(a,b);           //声明类模板的对象  
    mt.ShowMax();  
}  */