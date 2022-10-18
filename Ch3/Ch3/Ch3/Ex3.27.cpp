#include<iostream>;
#include<vector>;
int Txt_size()
{
	 int a = 5;
	return a;
}
int main()
{
	 unsigned buf_size = 1024;
	int ia[buf_size];//expression must have const value
	int ib[4 * 7 - 14];
	int ic[Txt_size()];//error Txt_size must have const value
	char st[11] = "fundamental";//error ,we must leave place for null
		
}