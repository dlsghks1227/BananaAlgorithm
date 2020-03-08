#include <iostream>

int main()
{
	int a, b, c, d, e;
	std::cin >> a >> b >> c >> d >> e;
	std::cout << ((a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c)) + ((d < e) ? d : e) - 50;
	return 0;
}