#include<iostream>;
#include <vector>;
int main()
{
	const std::vector<int>v1 = { 0,1,2,3,4,5 };
	int arr[10];
	int* beg = std::begin(arr);
	int* end = arr+v1.size();
	for (auto &it:v1)
	{
		*beg++ = it;
	}
	for ( auto beg=arr; beg != end; beg++)
	{
		std::cout << *beg << std::endl;
	}
}