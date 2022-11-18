#include <iostream>;
int main()
{
	constexpr int rows = 3;
	constexpr int columns = 4;
	int ia[rows][columns] = { { 0,1,2,3 }, { 4,5,6,7 }, { 8,9,9,10 } };
	//ranged for
	for (int (&it)[columns] : ia)
	{
		for (int &i:it)
		{
			std::cout << i<<std::endl;
		}
	}
	//using subscript
	for (size_t i = 0; i != rows; ++i)
	{
		for (size_t j = 0; j !=columns; ++j)
		{
			std::cout << ia[i][j] << std::endl;
		}
	}
	//using pointers
	for (int (*p)[columns]=ia;p!=ia+rows;++p)
	{
		for ( int *pc=*p;pc!=*p+columns;++pc)
		{
			std::cout << *pc << std::endl;
		}
	}
}