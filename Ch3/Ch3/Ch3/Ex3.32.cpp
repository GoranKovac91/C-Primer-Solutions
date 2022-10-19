#include<iostream>;
#include<vector>
int main()
{
	//it is not possible to cop raw array to another array,we can copy content of array only
	constexpr size_t arr_size = 10;
	int ia[arr_size];
	for (size_t i = 0; i < arr_size; ++i)
	{
		ia[i] = i;
	}
	int ib[arr_size];
	for (size_t i = 0; i < arr_size; i++)
	{
		ib[i] = ia[i];
	}
	std::vector<int>v1;
	std::vector<std::vector<int>>v2 ;
	v2.push_back(v1);
}