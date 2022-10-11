#include <iostream>;
#include <string>;
int main()
{
	std::string s1;
	std::cout << "Enter some string" << std::endl;
	std::getline(std::cin, s1);
	for (char & it : s1)
	{
		it = 'x';
	}
	std::cout << s1;
	//using char does not change output of program

}