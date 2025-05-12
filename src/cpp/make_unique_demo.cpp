#include <memory>
/**
 * unique_ptr
 * A smart pointer that owns and manages another object through a pointer.
 * It ensures that the object is automatically destroyed when the unique_ptr
 * goes out of scope.
 *
 * Ownership of the object is unique--only one unique_ptr at a time can
 * own the resource. So, given `unique_ptr<T>`, a unique_pointer owns
 * T, there can only be one unique_ptr pointing at it at a given time.
 */

// Consider the following:
/* std::unique_ptr<Widget> pt(new Widget(1));
 * // std::unique_ptr<Widget> p2 = p1;          // ERROR: cannot copy.
 * std::unique_ptr<Widget> p2 = std::move(p1);  // OK: transfer ownship.
 */

// Resource Acquisition Is Ininitialization (RAII).
/*
 * {
 *      auto p = std::make_unique<Widget>(5);
 * } // ~unique_ptr runs here -> delete Widget(5);
 *
 */

/**
 * make_unique
 * Allows contruct-and-own in a single step.
 *
 * Instead of:
 *      std::unique_ptr<Widget> p(new Widget(7));
 * Do:
 *      auto p = std::make_unique<Widget>(7);
 *
 * This is a helper function that safely creates and return a unique_ptr.
 * It handles the memory allocation and construction of the object in
 * one operation, helping prevent memory leaks by ensuring exception
 * safety.
 */

#include <iostream>
#include <memory>   // std::unique_ptr, std::make_unique
#include <vector>

class Widget {
private:
    int _id;
public:
    // constructor
    Widget(int id) : _id(id) {
        std::cout<< "Widget(" << _id << ") constructed\n";
    }

    // destructor
    ~Widget() {
        std::cout<< "Widget(" << _id << ") destructed\n";
    }

    void greet() const {
        std::cout << "Hello from widget #" << _id << "\n";
    }
};

int main() {
    // Create a unique_ptr via new (this is less safe).
    std::unique_ptr<Widget> w1(new Widget(1));
    w1->greet();

    // Creating a unique_ptr via make_unique (this is preferred).
    auto w2 = std::make_unique<Widget>(2);
    w2->greet();

    /*
     * make_unique is exception safe, the allocation and construction
     * happen in a single step, there is no window where an exception
     * could leak the raw pointer.
     */

    // Storing in a vector.
    std::vector<std::unique_ptr<Widget>> v;
    v.push_back(std::make_unique<Widget>(3));
    v.push_back(std::make_unique<Widget>(4));

    // Use the widgets.
    for (auto &wp : v) {
        wp->greet();
    }

    // When main() exits, w1, w2, and all items in v
    // are destroyed in reverse order.
    return 0;
}