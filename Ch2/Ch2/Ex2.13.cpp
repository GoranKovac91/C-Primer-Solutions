#include <iostream>;
int i = 42;
int main()
{
	int i = 100;
	int j = i;//value is 100
	//if we want to call i from global scope it should look like this int j = ::i (bad practice gice same name to variables in local and global scope)

}