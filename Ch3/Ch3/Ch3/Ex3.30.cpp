#include<iostream>;
int main()
{
	constexpr size_t array_size = 10;
	int ia[array_size];
	for (size_t ix=1 ; ix <= array_size ; ++ix)
	{
		ia[ix] = ix;
	}
	//error index out of range ,array of 10 has indexes from 0 to 9
}