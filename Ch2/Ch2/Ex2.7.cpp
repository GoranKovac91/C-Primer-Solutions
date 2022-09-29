#include <iostream>;
int main()
{
	"Who goes with F\145rgus?\012";  // character string literal containing two octal escape sequences
	3.14e1L;  // floating-point literal, type is `long double`
	1024f;  // error user defined literal not found
	3.14L;  // floating-point literal, type is `long double`

}