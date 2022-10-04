#include <iostream>;
int main()
{
	const int i = 42;
	auto j = i;// int
	const auto& k = i;//const ref to const int
	auto* p = &i;//pointer to const int
	const auto j2 = i;//const int
	auto& k2 = i;//ref to const int
	
}