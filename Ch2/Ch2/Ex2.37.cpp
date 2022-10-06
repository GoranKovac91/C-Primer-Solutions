#include<iostream>;
int main()
{
	int a = 3, b = 4;
	decltype(a)c = a;//c is int 
	decltype(a = b)d = a;//d is ref to a
}