#include<iostream>;
#include<string>;
#include<vector>;
#include<iterator>;
int VectorSum(std::vector<int>&v,int values)
{
	
	int sum = 0;
	while (std::cin >> values)
	{
		v.push_back(values);
	}

	for (auto& it : v)
	{
		sum += it;
	}
	return sum;
}
void AdjacentSum( std::vector<int>& v, int values)
{
	
	int sum = 0;
	while (std::cin >> values)
	{
		v.push_back(values);
	}
	for (int i = 0, j = v.size() - 1; i <= v.size() / 2; ++i, --j)
	{
		sum = v[i] + v[j];
		std::cout << sum << std::endl;
	}
}
int main()
{
	std::vector<int>v1;
	int userInput=0;
	AdjacentSum(v1, userInput);



}