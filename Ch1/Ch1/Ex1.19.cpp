#include<iostream>;
int main()
{
	int a, b;
	std::cout << "Please enter two numbers" << std::endl;
	std::cin >> a >> b;
	while (a != b)
	{
		if (a < b)
		{
			std::cout << ++a << std::endl;
		}
		else if(a>b)
		{
			std::cout << --a << std::endl;
		}
	}
}