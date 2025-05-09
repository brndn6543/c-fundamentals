/**
 * std::vector<T>
 *     A dynamic array managing a contiguous block of memory that can
 *     grow or shrink.
 *
 * vector.push_back(value)
 *     push_back is a method of std::vector. It appends value to the end
 *     of the vector, increasing its size by one. If there is not enough
 *     capacity, it allocates a larger buffer, moves the old elements over
 *     , then adds the new one.
 */
#include <iostream>
#include <vector>

int main() {
    // Empty vector of ints.
    std::vector<int> numbers;

    // Push some values on the end.
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);

    // Iterate over the vector and print the values.
    // Range based for--bind to n and run the loop body.
    for (auto &n : numbers) {       // `auto` deduces the type of each element.
        std::cout << n << std::endl;
    }

    return 0;
}