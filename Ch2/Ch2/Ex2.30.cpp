#include <iostream>;
int main()
{
	int i = 1;
	const int v2 = 0;//Top level const
	int v1 = v2;//Ok ,binding non const int to const int
	int* p1 = &v1;//ok ,binding non const pointer to non const int
	int& r1 = v1;//ok ,binding non const ref to non const int
	const int* p2 = &v2;//OK both consts are top level
	int* const p3 = &i;//ok binding const pointer to non const int
	int& r2 = v2;//error ref must have top level const
	
}