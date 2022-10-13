#include<iostream>;
#include<string>;
#include<vector>;
int main()
{
	std::vector<int>v1;//initialized empty vector of integers
	std::vector<int>v2(10);//vector of integers with 10 elements
	std::vector<int>v3(10, 42);//vector of integers with 10 elements all set to 42
	std::vector<int>v4{ 10 };//vector of integers with one element 10
	std::vector<int>v5{ 10,42 };//vector of integers with two elements 10 and 42
	std::vector<std::string> v6{ 10 };//vector of 10 empty string
	std::vector<std::string>v7{ 10,"hi" };//vector of 10 elements all set to "hi"
	
}