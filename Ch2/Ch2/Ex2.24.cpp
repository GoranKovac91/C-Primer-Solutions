#include<iostream>;
int main()
{
	int i = 42;

	void* p = &i;//ok void pointer can hold any type

	long* lp = &i;//error pointer must be same type as the object it points
}