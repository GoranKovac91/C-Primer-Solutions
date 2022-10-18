#include<iostream>;
int main()
{
	constexpr size_t arr_size = 10;
	int ia[arr_size];
	for (size_t i = 0; i < arr_size; ++i)
	{
		ia[i] = i;
	}
	for (auto& it : ia)
	{
		std::cout << it << std::endl;
	}

	
}