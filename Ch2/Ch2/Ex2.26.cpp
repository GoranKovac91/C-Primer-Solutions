#include <iostream>;
int main()
{
	// (a)
	const int buf;// not Ok const must be initialized

	//(b)
	int cnt = 0;//ok

	//(c)
	const int sz = cnt;//ok initilazied const to 0

	//(d)
	++cnt;//ok,cnt is not const
	++sz;//not ok sz is const
}