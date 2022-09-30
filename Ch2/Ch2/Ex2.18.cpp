#include<iostream>;
int main()
{
	int a = 5;

	int* ptr = &a;//assign pointer to a

	*ptr = 33;//changed value of a

	std::cout << *ptr;
}