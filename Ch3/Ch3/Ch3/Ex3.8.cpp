#include <iostream>;
#include <string>;
void StringToX()
{
	std::string s1;
	std::string::size_type index = 0; // also `decltype(s.size()) pos = 0`
	std::cout << "Enter some string" << std::endl;
	std::getline(std::cin, s1);
	if (!s1.empty())
	{
		while (index != s1.size())
		{
			s1[index++] = 'x';

		}
	}
	else
	{
		std::cout << "Empty string";
	}

	std::cout << s1;
}
void StringToXFor()
{
	std::string s1;
	std::cout << "Enter some string" << std::endl;
	std::getline(std::cin, s1);
	for (decltype(s1.size()) index = 0; index != s1.size() ; ++index)
	{
		s1[index] = 'x';
	}
	std::cout << s1;
}
int main()
{
	StringToXFor();

}