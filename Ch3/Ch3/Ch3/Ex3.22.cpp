#include <iostream>;
#include<vector>;
#include<string>;
#include <iterator>;
void ToUpper(std::vector<std::string>&v)
{
	for (auto it = v.begin(); it != v.end() && !it->empty(); ++it)
	{
		for ( auto &i:*it)
		{
			i = toupper(i);
		}
		
	}
}
int main()
{
	std::vector<std::string> text;
	std::string userInput;
	std::cout << "Enter strings for converting,use CTRL + Z for exit" << std::endl;
	while (std::getline(std::cin,userInput))
	{
		text.push_back(userInput);
	}
	ToUpper(text);
	for (auto it=text.cbegin();it!=text.cend()&& !it->empty();++it)
	{
		std::cout << *it<<std::endl;
	}
	
}