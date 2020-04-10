#include <iostream>

int main()
{
	int x, y;
	std::cin >> x >> y;
	x > 0 ? (y > 0 ? std::cout << '1' : std::cout << '4') : (y > 0 ? std::cout << '2' : std::cout << '3');
	return 0;
}