#include <iostream>;
int main()
{
	int ival = 1.01;//valid but possible loss of data

	//int &rval1 = 1.01; error refference can only be bound to object not literal

	int& rval2 = ival;//OK 

	//int& rval3; cannot define uninitialized refference 
}