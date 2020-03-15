#include <iostream>
#include <cstring>
#include <algorithm>

int main()
{
	std::string s;
	int max = 0, count[26] = { 0 }, n = 0;
	std::cin >> s;

	std::transform(s.begin(), s.end(), s.begin(), toupper);
	for (auto i = s.begin(); i != s.end(); ++i) {
		count[(*i) - 'A']++;
		if (count[(*i) - 'A'] >= max)
		{
			max = count[(*i) - 'A'];
			n = (*i) - 'A';
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (count[i] == max && n != i)
		{
			std::cout << '?' << std::endl;
			return 0;
		}
	}
	std::cout << (char)(n + 'A') << std::endl;
	return 0;
}