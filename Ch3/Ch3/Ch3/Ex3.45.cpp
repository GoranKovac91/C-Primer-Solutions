#include<iostream>;
int main()
{
	constexpr int rows = 3;
	constexpr int columns = 4;
	int ia[rows][columns] = { { 0,1,2,3 }, { 4,5,6,7 }, { 8,9,9,10 } };
	
	for ( auto &i:ia)
	{
		for (auto& j : i)
		{
			std::cout << j << std::endl;
		}
	}
	for (auto i = ia; i != ia + rows; ++i)
	{
		for (auto j = *i; j != *i + columns; ++j)
		{
			std::cout << *j << std::endl;
		}
	}

		for (auto p = std::begin(ia); p != std::end(ia); ++p)
		{
			for (auto q = std::begin(*p); q != std::end(*p); ++q)
			{
				std::cout << *q << std::endl;
			}
		}
	
}