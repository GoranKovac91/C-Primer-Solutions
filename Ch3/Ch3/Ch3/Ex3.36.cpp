#include<iostream>;
#include<vector>;
int main()
{
	constexpr size_t arr_size = 10;
	int arr1[arr_size];
	int arr2[arr_size];
	int input;
	int input2;
	int counter=0;
	for (size_t i = 0; i != arr_size; i++)
	{
		std::cin >> input;
		std::cin >> input2;
		arr1[i] = input;
		arr2[i] = input2;
	}
	for (size_t i = 0; i < arr_size; i++)
	{
		if (arr1[i]==arr2[i])
		{
			counter++;
		}
	}
	if (counter ==arr_size)
	{
		std::cout << "Arays have all elements same " << std::endl;
	}
	std::cout << " Number of same elements in arrays is " << counter << std::endl;

	/// comparing vectors
	std::vector<int>v1;
	std::vector<int>v2;
	int userInput1;
	int userInput2;
	std::cout << "Press CTRL + Z to exit" << std::endl;
	for (int i = 0;i <= 5; i++)
	{
		std::cin >> userInput1;
		v1.push_back(userInput1);
	}
	for (int i = 0; i <= 5; i++)
	{

		v2.push_back(userInput2);
	}
	if (v1==v2 && v1.size()==v2.size())
	{
		std::cout << "Vector elements are same" << std::endl;
	}
	
}