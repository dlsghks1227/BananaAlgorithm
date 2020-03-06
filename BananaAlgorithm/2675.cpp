#include <iostream>

int main()
{
	int count;
	std::cin >> count;
	for (int i = 0; i < count; i++)
	{
		int j = 0, n = 0;
		char s[20];
		std::cin >> n >> s;
		while (s[j] != NULL)
		{
			for (int k = 0; k < n; k++)
				std::cout << s[j];
			j++;
		}
		std::cout << '\n';
	}
	return 0;
}