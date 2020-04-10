#include <iostream>
#include <cmath>

int main()
{
	int n;
	std::cin >> n;
	for (int i = 0; i < 2 * n - 1; i++) {
		for (int j = abs(n - i - 1) + 1; j < n; j++)
			std::cout << ' ';
		for(int k = 0; k < std::abs(n - i - 1) * 2 + 1; k++)
			std::cout << '*';
		std::cout << '\n';
	}
	return 0;
}