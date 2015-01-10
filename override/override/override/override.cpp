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
	Base b;
	b.g();     // result: Base::g(void)

	Derived d;
	Base *base_p = &d;    // normally, it 
	base_p->f(42);      //result: Base::f(int) 42     
	base_p->f(3.14f);   //result : Base::f(float) 3.14
	base_p->g();         // result: Derived::g(void)      normally, that is "virtual" not exist, output is Base:g(void)

	Derived *derived_p = &d;
	derived_p->g();         // result: Derived::g(void)
}

