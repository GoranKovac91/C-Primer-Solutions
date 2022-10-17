#include <iostream>;
#include<vector>;
#include<string>;
#include <iterator>;
void Print_Int_vector(std::vector<int>& v)
{
	for (auto it = v.begin(); it !=v.end(); ++it)
	{
		std::cout << *it<<std::endl;
	}
}
void Print_String_vector(std::vector<std::string>& v)
{
	for (auto it = v.begin(); it != v.end(); ++it)
	{
		std::cout << *it << std::endl;
	}
}
int main()
{
	std::vector<int> v1;               // 0  element
	std::vector<int> v2(10);           // 10 elements, values are all 0
	std::vector<int> v3(10, 42);       // 10 elements, values are all 42
	std::vector<int> v4{ 10 };           // 1  element,  value  is  10
	std::vector<int> v5{ 10, 42 };       // 2  elements, values are 10 and 42
	std::vector<std::string> v6{ 10 };        // 10 elements, values are all empty string
	std::vector<std::string> v7{ 10, "hi" };  // 10 elements, values are all "hi"
	Print_Int_vector(v3);
	Print_String_vector(v7);

}