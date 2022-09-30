#include <iostream>;
int main()
{
	//prints out 10 10 because we changed value of i to 10 before printing
	int i, & ri = i ;
	i = 5;
	ri = 10;
	std::cout << i << ri << std::endl;


}