#include <iostream>
using namespace std;
/** 
*	1.hide function have same name but different argumentsr regardless of  string "virtual" existing
*  2.hide function also happends when name and argements are same as well as base function have no "virtual"
*/
class Base
{
public:
	virtual void load(float x){ cout << "Base::f(float) " << x << endl; }
	void name_regard_hide(float x){ cout << "Base::g(float) " << x << endl; }
	void name_arg_novirt_hide(float x){ cout << "Base::h(float) " << x << endl; }
};
/*
* override function of g(void)
* @param 
* @return 
*/
class Derived : public Base
{
public:
	virtual void load(float x){ cout << "Derived::f(float) " << x << endl; }    //overload
	void name_regard_hide(int x){ cout << "Derived::g(int) " << x << endl; }             // hide 
	void name_arg_novirt_hide(float x){ cout << "Derived::h(float) " << x << endl; }   // hide
};

void main(void)
{
	Derived d;
	Base *base_p = &d;
	Derived *derived_p = &d;

	// Good : behavior depends solely on type of the object
	base_p->load(3.14f);     //result : Derived::f(float) 3.14
	derived_p->load(3.14f);     //result:  Derived::f(float) 3.14

	// Bad : behavior depends on type of the pointer
	base_p->name_regard_hide(3.14f); //result : Base::g(float) 3.14
	derived_p->name_regard_hide(3.14f); //result: Derived::g(int) 3

	// Bad : behavior depends on type of the pointer
	base_p->name_arg_novirt_hide(3.14f); //result Base::h(float) 3.14
	derived_p->name_arg_novirt_hide(3.14f); //result : Derived::h(float) 3.14
}
