#include <iostream>;
using std::cout;
using std::endl;
using std::cin;
void Ex1_9()
{
	int a = 50;
	int sum = 0;
	while (a <= 100)
	{
		sum += a;

		++a;
	}
	cout << " Sum of numbers from 50 to 100 is " << sum << endl;
}
void Ex1_10()
{
	int i = 10;
	while (i >= 0)
	{
		cout << i << endl;
		--i;
	}
}
void Ex1_11()
{
	int a, b;
	cout << "Please enter two numbers" << endl;
	cin >> a >> b;
	while (a != b)
	{
		cout << ++a << endl;
	}
}
int main()
{
	Ex1_9();
	Ex1_10();
	Ex1_11();
}