#include<iostream>;

int main()
{
	const char s1[] = { "Random" };
	const char s2[] = { "String" };
	char s3[sizeof(s1)+sizeof(s2)];
	strcpy_s(s3, s1);
	strcat_s(s3, s2);
	std::cout << s3 << std::endl;

}