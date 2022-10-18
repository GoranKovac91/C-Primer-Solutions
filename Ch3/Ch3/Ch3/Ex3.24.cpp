#include<iostream>;
#include<string>;
#include<vector>;
#include<iterator>;
int VectorSum(std::vector<int>& v, int values)
{

	int sum = 0;
	while (std::cin >> values)
	{
		v.push_back(values);
	}

	for (auto it=v.begin();it!=v.cend();it++)
	{
		sum += *it;
	}
	return sum;
}
void AdjacentSum(std::vector<int>& v, int values)
{

	int sum = 0;
	while (std::cin >> values)
	{
		v.push_back(values);
	}
	for (auto it = v.begin();it!=v.end();it++)
	{
		//need to update this
	}
}
int main()
{
	std::vector<int>v1;
	int userInput = 0;
	



}