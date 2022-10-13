#include<iostream>;
#include <string>;
int main()
{
	std::string s1;
	std::cout << "Enter some string " << std::endl;
	std::getline(std::cin, s1);
	auto it = std::remove_if(s1.begin(), s1.end(), ::ispunct);
	s1.erase(it, s1.end());
	std::cout << s1 << std::endl;
}