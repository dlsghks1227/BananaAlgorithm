#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	for (int i = 0; i < n * 2; i++) {
		for (int j = 0; j < n; j++) {
			if ((j % 2) == (i % 2))
				std::cout << '*';
			else
				std::cout << ' ';
		}
		std::cout << '\n';
	}
	return 0;
}