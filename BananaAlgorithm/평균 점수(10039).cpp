#include <iostream>

int main()
{
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		int score;
		std::cin >> score;
		if (score <= 40)
			score = 40;
		sum += score;
	}
	std::cout << sum / 5;
}