#include <iostream>
#include <cstring>

int main()
{
	char c[100];
	std::cin >> c;
	int count[26] = { -1 }, n = 0;
	memset(count, -1, sizeof(int) * 26);

	while (c[n] != NULL)
	{
		if (count[(int)c[n] - (int)'a'] == -1)
			count[(int)c[n] - (int)'a'] = n;
		n++;
	}
	for (int i = 0; i < 26; i++)
		std::cout << count[i] << ' ';
	return 0;
}