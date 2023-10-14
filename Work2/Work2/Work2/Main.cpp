#include <iostream>
#include <vector>
#include <algorithm>
#include <variant>
#include <cassert>
#include <string>

std::variant<int, std::string, std::vector<int>> get_variant() {
	std::srand(std::time(nullptr));
	int random_variable = std::rand() % 3;

	std::variant<int, std::string, std::vector<int>> result;
	switch (random_variable)
	{
	case 0:
		result = 5;
		break;
	case 1:
		result = "string";
		break;
	case 2:
		result = std::vector<int>{ 1, 2, 3, 4, 5 };
		break;
	default:
		break;
	}
	return result;
}


int main() {
	std::variant<int, std::string, std::vector<int>> result = get_variant();
	if (std::holds_alternative<int>(result)) {
		std::cout << std::get<int>(result) << " * 2 = " << std::get<int>(result) * 2 << std::endl;
	}
	else if (std::holds_alternative<std::string>(result)) {
		std::cout << std::get<std::string>(result) << std::endl;
	}
	else if (std::holds_alternative <std::vector<int>>(result)) {
		for (int n : std::get<std::vector<int>>(result)) {
			std::cout << n << " ";
		}
		std::cout << std::endl;
	}
	else {
		return 0;
	}
	return 0;

}