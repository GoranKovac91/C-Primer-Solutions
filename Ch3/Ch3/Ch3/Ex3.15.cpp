#include<iostream>;
#include<string>;
#include<vector>;
int main()
{
	std::string words;
	std::vector<std::string>v1;
	while (std::getline(std::cin,words))
	{
		v1.push_back(words);
	}
	for (auto& it : v1)
	{
		std::cout << it;
    }
}