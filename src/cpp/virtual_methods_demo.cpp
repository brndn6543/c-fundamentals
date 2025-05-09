/**
 * In C++ virtual methods are the way to get objects deciding
 * at runtime which implementation to call--without manually
 * managing function pointers.
 *
 *     1) Base class declares one or more methods virtual.
 *     2) Each derived class can override those virtual methods.
 *     3) When a virtual method is called through a pointer or reference to the base
 *        C++ looks up the correct override using a vtable.
 */
#include <iostream>
#include "virtual_methods_demo.hpp"
#include <vector>
#include <memory>

void Animal::speak() const {
    std::cout << "Animal..." << std::endl;
}

void Dog::speak() const {
    std::cout << "Woof..." << std::endl;
}

void Cat::speak() const {
    std::cout << "Meow..." << std::endl;
}

int main() {
    std::vector<std::unique_ptr<Animal>> zoo;

    zoo.push_back(std::make_unique<Dog>());
    zoo.push_back(std::make_unique<Cat>());

    for (auto &a : zoo) a->speak();

    return 0;
}