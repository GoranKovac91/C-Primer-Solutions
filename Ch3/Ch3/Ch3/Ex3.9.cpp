#include<iostream>;
#include <string>;
int main()
{
	std::string s;
	std::cout << s[0];
	//it is legal but subscripting an empty string is undefined
}