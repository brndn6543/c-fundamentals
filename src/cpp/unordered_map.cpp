/**
 * unordered_map
 * Stores key-value pairs, where each key is unique and mapped to one value.
 * It implements a hash table internally, allowing for avg constant time (0(1))
 * for insertions, deletions, and lookups.
 */
#include <iostream>
#include <unordered_map>
#include <string>
#include <__msvc_ostream.hpp>

int main() {
	// Unordered map of string keys and integer values.
	std::unordered_map<std::string, int> carCount;

	// Insert elements.
	carCount["nova"] = 7;
	carCount["chevelle"] = 5;
	carCount["camaro"] = 3;

	// Access elements.
	std::cout << "nova: " << carCount["nova"] << std::endl;

	// Modify elements.
	carCount["nova"] = 9;
	std::cout << "updated nova: " << carCount["nova"] << std::endl;

	// Iterate.
	for (const auto &car : carCount) {
		std::cout << car.first << ": " << car.second << std::endl;
	}

	return 0;
}
