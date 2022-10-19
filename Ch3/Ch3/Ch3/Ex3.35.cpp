#include<iostream>;
int main()
{
	constexpr size_t arr_size = 10;
	int arr[arr_size ]= {};
	int input;
	int* beg = std::begin(arr);
	int* end = std::end(arr);
	for (size_t i = 0; i != arr_size; i++)
	{
		std::cin >> input;
		arr[i] = input;
	}
	
	while (beg!=end)
	{
		*beg = 0;
		++beg;
		
	}
	for (auto& it : arr)
	{
		std::cout << "Value after change = " << it << std::endl;
	}
}