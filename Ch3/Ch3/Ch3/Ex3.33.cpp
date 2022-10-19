#include<iostream>;
int main()
{
	unsigned scores[11];
	unsigned grade;
	//we get this values(3435973836) if we print array content and do not initialize array 

	while (std::cin>>grade)
	{
		if (grade<=100)
		{
			++scores[grade / 10];
		}
	}
}