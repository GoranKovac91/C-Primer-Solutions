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
	
	for (int i = 0; i <v1.size() ; ++i)
	{
		if (i % 8 == 0)
		{
			std::cout << std::endl;
		}
		std::cout << v1[i];

		
	}
}