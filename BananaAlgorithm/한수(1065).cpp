#include <iostream>

bool x(int n)
{
	if (n < 100)
		return true;
	else
	{
		if (n == 1000)
			return false;
		int a1 = (n / 10) % 10 - n % 10;
		n /= 10;
		int a2 = (n / 10) % 10 - n % 10;
		if (a1 == a2)
			return true;
		else
			return false;
	}
}

int main()
{
	int n, count = 0;
	std::cin >> n;

	for (int i = 1; i <= n; i++)
		if (x(i))
			count++;

	std::cout << count << std::endl;
	return 0;
}