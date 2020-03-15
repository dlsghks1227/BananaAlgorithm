#include <iostream>
#include <cstring>

int main()
{
	std::string s;
	int count = 0;
	std::cin >> s;
	for (auto i = s.begin(); i != s.end(); ++i)
	{
		if ('C' >= (*i))	count += 3;
		else if ('F' >= (*i)) count += 4;
		else if ('I' >= (*i)) count += 5;
		else if ('L' >= (*i)) count += 6;
		else if ('O' >= (*i)) count += 7;
		else if ('S' >= (*i)) count += 8;
		else if ('V' >= (*i)) count += 9;
		else count += 10;
	}

	std::cout << count << '\n';

	return 0;
}