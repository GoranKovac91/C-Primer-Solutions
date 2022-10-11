#include <iostream>;
#include<string>;
std::string IsEqual()
{
	std::string s1;
	std::string s2;
	std::getline(std::cin,s1);
	std::getline(std::cin, s2);
	
	if (s1==s2)
	{
		 return "Equal";
	}
	else if(s1!=s2 && s1.size() > s2.size())
	{
		return "Not equal and s1 bigger";
	}
	else if (s1 != s2 && s1.size() < s2.size())
	{
		return "Not equal and s2 bigger";
	}
}
std::string CheckLength()
{
	std::string s1;
	std::string s2;
	std::getline(std::cin, s1);
    std::getline(std::cin, s2);
	if (s1.size()>s2.size())
	{
		return "String 1 is longer";
	}
	else if (s1.size()<s2.size())
	{
		return "String 2 is longer";
	}
	else
	{
		return "Strings are same length";
	}
}

int main()
{
	std::cout << CheckLength();
}