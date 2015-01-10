#include<iostream>
using namespace std;

/** 
 *	override functions defferent at the {} part,  in base of derive class; 
 *  while overload must have different arguments, in the same class
 *	base function of override must be "virtual"
 */
class Base
{
public:
	void f(int x){ cout << "Base::f(int) " << x << endl; }
	void f(float x){ cout << "Base::f(float) " << x << endl; }
	virtual void g(void){ cout << "Base::g(void)" << endl;}
};
/**
 * override function of g(void)
 * @param 
 * @return 
 */
class Derived : public Base
{
public:
	virtual void g(void){ cout << "Derived::g(void)" << endl;}
};


void main(void)
{
	Derived d;
	Base *pb = &d;
	pb->f(42);      //result: Base::f(int) 42
	pb->f(3.14f);   //result : Base::f(float) 3.14
	pb->g();         // result: Derived::g(void)
}

