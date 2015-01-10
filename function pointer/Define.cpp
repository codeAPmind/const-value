#include <iostream>
using namespace std;
#define min(a,b) ((a) < (b) ? (a) : (b))

const int size = 10;
int ia[size];

int main() 
{
	int elem_cnt = 0;
	int *p = &ia[0];

	// 计数数组元素的个数
	while ( min(p++,&ia[size]) != &ia[size] )
		++elem_cnt;

	cout << "elem_cnt : " << elem_cnt
		<< "\texpecting: " << size << endl;

	return 0;
}       