#include<iostream>;
int main()
{
	int i = 42;
	int* p1 = &i;
	*p1 = *p1 * *p1;
	// Prints out 1764,same as writing i * i
}