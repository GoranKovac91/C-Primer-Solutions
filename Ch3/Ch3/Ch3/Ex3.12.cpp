#include<iostream>;
#include <string>;
#include<vector>;
int main()
{
	std::vector<std::vector<int>>ivec;//vector of vectors type int
	//std::vector<std::string> svec = ivec;//error types of vector do not match
	std::vector<std::string> svec(10, "Null");//vector of string with 10 elements all are string literals "Null"
	
}