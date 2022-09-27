#include<iostream>;
int main()
{
	int a = 50;
	int sum = 0;
	while (a <= 100)
	{
		sum += a;

		++a;
	}
	std::cout << " Sum of numbers from 50 to 100 is " << sum << std::endl;
}