#include <iostream>
#include <cstring>

int main()
{
	std::string s;
	int count = 0;
	std::cin >> s;

	for (auto i = s.begin(); i != s.end(); ++i)
	{
		if ((*i) == 'c' || (*i) == 's' || (*i) == 'z' || (*i) == 'd')
		{
			if (i == s.end() - 1) count++;
			else
			{
				if (*(i + 1) == '=')
				{
					if (i == s.begin()) {
						count++;
						i++;
					}
					else
					{
						if (*(i - 1) == 'd' && (*i) == 'z')
						{
							i++;
						}
						else
						{
							count++;
							i++;
						}
					}
				}
				else if (*(i + 1) == '-' && ((*i) == 'c' || (*i) == 'd'))
				{
					count++;
					i++;
				}
				else
					count++;
			}
		}
		else if ((*i) == 'l' || (*i) == 'n')
		{
			if (i == s.end() - 1) count++;
			else
			{
				if (*(i + 1) == 'j')
				{
					count++;
					i++;
				}
				else
					count++;
			}
		}
		else
			count++;
	}

	std::cout << count << std::endl;
	return 0;
}