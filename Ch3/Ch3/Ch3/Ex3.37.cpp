#include<iostream>;
int main()
{
	//Because there is no null character at the end this program will print content of array and continue
	//printing everything in memory until it finds null character and stop
	const char ca[] = { 'h','e','l','l','o' };
	const char* cp = ca;
	while (*cp)
	{
		std::cout << *cp;
		++cp;
	}
}