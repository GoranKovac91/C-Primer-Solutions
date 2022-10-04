#include<iostream>;
int main()
{
	int i = 0, & r = i;
	const int ci = i, & cr = ci;

	auto a = r;  // int
	auto b = ci;  // int
	auto c = cr;  // int
	auto d = &i;  // int *
	auto e = &ci;  // const int *
	const auto f = ci;  // const int
	auto& g = ci;  // const int & 
	
	a = 42;//ok plain int
	b = 42;//ok plain int 
	c = 42;//ok plain int
	d = 42;//error d is a pointer
	e = 42;//error e is pointer to const int
	f = 42;//error cannot change value of const int
	g = 42;//error g is reff to const int
	
}