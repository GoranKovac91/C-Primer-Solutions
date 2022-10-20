#include<iostream>;
#include <vector>;
int main()
{
	const int arr[] = { 0,1,22,334,45,6 };
	std::vector<int>v1(std::begin(arr),std::end(arr));

	for (auto& it : v1)
	{
		std::cout << it << std::endl;
	}
}