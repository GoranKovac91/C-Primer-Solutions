#include<iostream>;
#include<string>;
constexpr size_t size = 100;
std::string Compare_Strings(std::string& s1, std::string& s2)
{
	std::cout << "Enter string number 1" << std::endl;
	std::getline(std::cin,s1) ;
	std::cout << "Enter string number 2" << std::endl;
	std::getline(std::cin, s2);
	if (s1 == s2)
	{
		return "Strings are same";
	}
	else
	{
		return "Strings are not same";
	}
}
	int main()
	{
		std::string s1;
		std::string s2;
		std::cout << Compare_Strings(s1,s2);

		char cs1[100];
		char cs2[100];
		std::cin >> cs1 >> cs2;
		if (!strcmp(cs1, cs2))
		{
			std::cout << " C style strings are same." << std::endl;
		}
		else
		{
			std::cout << " C style strings are not same." << std::endl;
		}
			

	}
