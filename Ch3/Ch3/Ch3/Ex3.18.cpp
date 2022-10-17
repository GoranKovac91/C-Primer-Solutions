#include<iostream>;
#include<string>;
#include<vector>;
int main()
{
	std::vector<int>ivec;
	//ivec[0] = 42;
//illegal vector subscript out of range

	//fixed
	ivec.push_back(42);

}