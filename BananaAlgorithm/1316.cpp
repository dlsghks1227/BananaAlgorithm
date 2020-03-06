#include <iostream>
int main()
{
	int n, count = 0;
	std::string s;
	
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> s;
		for (unsigned int i = 0; i <= s.size(); i++)
		{
			if (i == s.size()) { count++; }
			else
			{
				if (s[i] == s[i + 1]) { continue; }
				else
				{
					if (s.find(s[i + 1]) < i)
						break;
					else
						continue;
				}
			}
		}
	}

	std::cout << count << '\n';

	return 0;
}