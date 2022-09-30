#include <iostream>;
int main()
{
	int i = 0, & r1 = i;
	double d = 0, & r2 = d;
	r2 = 3.14159;//valid ,we change value of d;

	r2 = r1;//valid changed value of d to value of i;

	i = r2;//valid ,changed value of i to value of object which r2 is bound but loss data

	r1 = d;//valid changed value of i to 0
	
}