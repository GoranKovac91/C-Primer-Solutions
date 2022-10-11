#include <iostream>;
#include <string>;
int main()
{
	std::string s1;
	std::cout << "Enter some string" << std::endl;
	std::getline(std::cin, s1);
	for (auto &it:s1)
	{
		it = 'x';
	}
	std::cout << s1;

}