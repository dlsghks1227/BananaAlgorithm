#include <iostream>

int fact(int n)
{
	if (n == 0) return 1;
	else if (n == 1) return n;
	else return n * fact(n - 1);
}

int main()
{
	int n;
	std::cin >> n;
	std::cout << fact(n);
	return 0;
}