#include <iostream>;
int main()
{

	int i = 1;
	const int v2 = 0;
	int v1 = v2;
	int* p1 = &v1;
	int& r1 = v1;
	const int* p2 = &v2;
	int* const p3 = &i;
	int& r2 = v2;

	r1 = v2;//ok non const ref to non const int
	p1 = p2;//error low level const doesnt match
	p2 = p1;//OK
	p1 = p3;//error low level const doesnt match
	p2 = p3;//OK
}