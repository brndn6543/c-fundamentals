/**
 * The contains method was added in C++20, it checks if a specific key exists
 * in the unordered map.
 *
 *		bool contains(const Key& key) const;
 *
 *	Complexity:
 *		Avg: O(1)
 *		Worst: O(n)
 */
#include <iostream>
#include <unordered_map>
#include <string>

void checkKey(const int keyToCheck, std::unordered_map<int, std::string> keyMap) {
	if (keyMap.contains(keyToCheck)) {
		std::cout << "[+] Key" << keyToCheck << " found\n. Value: " << keyMap[keyToCheck] << "\n";
	} else {
		std::cout << "[-] Key not found." << std::endl;
	}
}

int main() {
	const std::unordered_map<int, std::string> carMap = {
		{1, "Corvette"},
		{2, "Chevette"},
		{3, "GTO"}
	};

	int keyToCheck = 2;
	checkKey(keyToCheck, carMap);

	keyToCheck = 5;
	checkKey(keyToCheck, carMap);

	return 0;
}
