#include <iostream>
#include <algorithm>
#include <cstring>

int main()
{
	std::string a, b;
	std::cin >> a >> b;
	std::reverse(a.begin(), a.end());
	std::reverse(b.begin(), b.end());
	std::cout << ((atoi(a.c_str()) > atoi(b.c_str())) ? a : b);
	return 0;
}