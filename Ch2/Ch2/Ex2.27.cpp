#include <iostream>;
int main()
{
	// (a)
	 int i = -1, & r = 0;//not ok

	//(b)
	 int i2 = 2;
     int* const p2 = &i2; //const pointer to non const object
	

	//(c)
	const int i = -1, &r=0; // ok

	//(d)
	const int* const p3 = &i2;// ok
	 
	
	//(e)
	const int* p1 = &i2;//ok
	
	//(f)
	const int& const r2;//error r2 must be initialized

	//(g)
	const int i2 = i; const int &r = i; //ok
}