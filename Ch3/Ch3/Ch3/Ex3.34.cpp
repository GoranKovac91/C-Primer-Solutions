#include<iostream>;
#include<string>;
#include<iterator>;
int main()
{
	constexpr size_t arr_size = 10;
	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
	int p1 = arr[0];
	int p2 = arr[9];
	p1 += p2 - p1;
	//operation is legal,but we must be sure that p1 in the end point to actuall element in array or one past the end off array
}