#include <iostream>
#include <cmath>

int main()
{
	int n;
	std::cin >> n;
	for (int i = 0; i < 2 * n - 1; i++) {
		for (int j = abs(n - i - 1); j < n; j++)
			std::cout << '*';
		std::cout << '\n';
	}
	return 0;
}