#include <iostream>
#include <vector>
#include <algorithm>

void print(int n) {
	std::cout << n << " ";
}

int main() {
	std::vector<int> mas = { 3, 4, 14, 17, 32, 12, 7 };
	std::for_each(mas.begin(), mas.end(), print);
	std::cout << std::endl;
	auto add = [](int& n) {
		if (n % 2 != 0) {
			n = n * 3;
		}
	};
	std::for_each(mas.begin(), mas.end(), add);
	std::for_each(mas.cbegin(), mas.cend(), print);
	return 0;
}