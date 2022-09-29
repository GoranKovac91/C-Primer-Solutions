#include<iostream>;
int main()
{
	//is legal but very bad practice
	//prints 100 because we adressed to variable "i" outside for loop
	int i = 100, sum = 0;
	for (int i = 0; i !=10; ++i)
		sum += i;
	
	std::cout << i;
}