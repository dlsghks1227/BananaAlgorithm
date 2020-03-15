#include <iostream>
#include <cstring>
#include <sstream>
#include <vector>

int main()
{
	std::vector<std::string> v;
	std::string text;
	std::getline(std::cin, text);
	std::stringstream ss(text);

	while (std::getline(ss, text, ' ')) {
		if(text.compare(" ") > 0)
			v.push_back(text);
	}
	std::cout << v.size() << '\n';
	return 0;
}