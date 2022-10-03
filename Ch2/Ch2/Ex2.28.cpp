#include <iostream>;
int main()
{
	//(a)
	int i, const* cp;//error const pointer must be initialized

	//(b)
	int* p1, const* p2;//error const pointer p2 must be initialized ,p1 is OK

	//(c)
	const int ic, & r = ic;//error const int ic must be initialized

	//(d)
	const int* const p3;//error const pointer p3 must be initialized

	//(e)
	const int* p;//OK
	
	
}