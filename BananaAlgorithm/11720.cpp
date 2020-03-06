#include <iostream>
#include <string>

int main()
{
	int result = 0, n = 0;
	std::cin >> n;
	char* num = new char[n];
	std::cin >> num;
	for (int i = 0; i < n; i++)
		result += num[i] - '0';

	std::cout << result << std::endl;

	delete[] num;
	num = nullptr;
	return 0;
}