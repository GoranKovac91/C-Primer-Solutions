#include <iostream>;
#include <string>;
void AddStrings()
{
	std::string s1;
	std::string Concatenated;
	while (std::getline(std::cin, s1))
	{
		Concatenated += s1;
	}
	
	remove(Concatenated.begin(), Concatenated.end(), ' ');
	
	std::cout << Concatenated << std::endl;
}
void SeparateStrings()
{
	std::string s1;
	std::string Separated;
	while (std::cin>>s1)
	{
		Separated += s1 + " ";
	}
	std::cout << Separated;
}
int main()
{
	AddStrings();
}