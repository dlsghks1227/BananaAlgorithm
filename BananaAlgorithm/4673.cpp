#include <iostream>

int d(int n)
{
	return n + ((n % 100000) / 10000) + ((n % 10000) / 1000) + ((n % 1000) / 100) + ((n % 100) / 10) + (n % 10);
}

int main()
{
	bool a[10001] = { false };
	int b = 0;
	for (int i = 0; i < 10000; i++)
	{
		b = d(i);
		if(b <= 10000) a[b] = true;
	}

	for (int i = 0; i < 10000; i++)
		if (!a[i])
			std::cout << i << std::endl;

	return 0;
}