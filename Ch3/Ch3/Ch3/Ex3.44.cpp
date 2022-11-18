#include<iostream>;
int main()
{

	constexpr int rows = 3;
	constexpr int columns = 4;
	int ia[rows][columns] = { { 0,1,2,3 }, { 4,5,6,7 }, { 8,9,9,10 } };
    using int_array = int[columns];

    for (int_array& row : ia) {
        for (const int& col : row)
            std::cout << col << '\t';
        std::cout << std::endl;
    }

    for (size_t i = 0; i != rows; ++i) {
        for (size_t j = 0; j != columns; ++j)
            std::cout << ia[i][j] << '\t';
        std::cout << std::endl;
    }

    for (int_array* pr = ia; pr != ia + rows; ++pr) {
        for (int* pc = *pr; pc != *pr + columns; ++pc)
            std::cout << *pc << '\t';
        std::cout << std::endl;
    }
	
}