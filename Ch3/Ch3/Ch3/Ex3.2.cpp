#include<iostream>;
#include<string>;
void ReadLines()
{
	std::string s;
	while (std::getline(std::cin, s))
	{	
		std::cout << s << std::endl;
	}
}
void ReadWords()
{
	std::string s;
	while (std::cin>>s)
	{
		std::cout << s << std::endl;
	}
}

int main()
{
	ReadLines();
}