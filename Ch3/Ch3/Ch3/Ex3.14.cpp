#include<iostream>;
#include<string>;
#include<vector>;
int main()
{
	int a;
	std::vector<int>v1;
	while (std::cin>>a)
	{
		v1.push_back(a);
	}
	for (auto& it : v1)
	{
		if (it!=0)
		{
			it = 22;
		}
		std::cout << it << std::endl;
	}
}