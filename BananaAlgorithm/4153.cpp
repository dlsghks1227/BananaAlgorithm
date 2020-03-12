#include <iostream>

int main()
{
	long long a, b, c;

	while (true)
	{
		std::cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
			break;
		if ((a * a) + (b * b) == (c * c) ||
			(a * a) + (c * c) == (b * b) || 
			(b * b) + (c * c) == (a * a))
			std::cout << "right" << '\n';
		else
			std::cout << "wrong" << '\n';
	}
	return 0;
}