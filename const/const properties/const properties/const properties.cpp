#include<iostream>
using namespace std;

class A
{
	enum {size1=10, size2 = 20 }; 
	//enum {size3 = 100.002};  error , value of enum must be an interger
	int array1[size1]; 
	int array2[size2]; 
    // const int size = 100;    error   only in constructor can be apear;
	//int array[size];     error     also in struct define
} ;


void main()
{
	const int i=5; 
	int j=0; 
	//   i=j;   //error
	 j=i;   

	int value=0; 
	const int const_value=0;            //i can't be modified
   // const_value = 200;  error
	const int *pi=&value;        // the value which p1 pointed to is const, 
	value= 800; // error
	pi=&const_value;    
	int  * const const_pii= const_value;    //  pointer const_p is const, only the value it pointed to can be modified
   //  const_pii = &i;  error
   *const_pii=100;  
	const int * const CC_pi=&i; //both are constants
}


