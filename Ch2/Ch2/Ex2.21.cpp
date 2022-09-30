#include<iostream>;
int main()
{
	int i = 0;
	//double* dp = &i;error pointer type must match object
	
	//int* ip = i; error pointer cannot point to literal

	int* p = &i;//OK
}