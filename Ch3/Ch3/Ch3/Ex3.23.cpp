#include <iostream>;
#include<vector>;
#include<string>;
#include <iterator>;
int main()
{
	int userInput;
	std::vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		std::cin >> userInput;
		v1.push_back(userInput);
	}
	for (auto it=v1.begin();it != v1.end();++it )
	{
		*it *= 2;
	}
	
}