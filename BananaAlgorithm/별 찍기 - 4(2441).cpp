#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i > j)
				std::cout << ' ';
			else
				std::cout << '*';
		}
		std::cout << '\n';
	}
	return 0;
}