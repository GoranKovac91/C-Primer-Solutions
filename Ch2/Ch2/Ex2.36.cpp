#include <iostream>;
int main()
{
	//values after ++ operations  are c = 4,d = 4  
	int a = 3, b = 4;
	decltype(a)c = a;//plain int
	decltype ((b))d = a;//int &
	++c;
	++d;
	
}