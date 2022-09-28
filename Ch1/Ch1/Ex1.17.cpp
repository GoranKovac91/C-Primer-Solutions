#include <iostream>;
int main()
{
    //if numbers are always equal we never get output if numbers are all the same we always get output
    int curVal = 0, val = 0;
    if (std::cin >> curVal) {
        int cnt = 1;
        while (std::cin >> val) {
            if (val == curVal)
                ++cnt;
            else {
                std::cout << curVal << " occurs "
                    << cnt << " time(s)" << std::endl;
                curVal = val;
                cnt = 1;
            }
        }
        std::cout << curVal << " occurs "
            << cnt << " time(s)" << std::endl;
    }
    
	return 0;
}