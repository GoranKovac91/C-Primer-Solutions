#include<iostream>;
#include<string>;
#include<vector>;
int main()
{
	std::string s1;
	std::vector<std::string>v1;
	while (std::cin>>s1)
	{
		v1.push_back(s1);
	}
	for (auto& it : v1)
	{
		
		for (auto& c : it)
		{
			c = toupper(c);
		}
		
	}
	
	for (auto& it : v1)
	{

		std::cout << it;
		for (int i = 0; i <=it.length(); i++)
		{
			if (i >=8)
			{
				std::cout << std::endl;
			}
		}
	}
	
}