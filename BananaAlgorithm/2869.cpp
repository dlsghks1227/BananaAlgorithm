#include <iostream>
#include <cmath>

int main()
{
	int a, b, v;
	std::cin >> a >> b >> v;
	std::cout << (v - b - 1) / (a - b) + 1;
	return 0;
}