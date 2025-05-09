#ifndef VIRTUAL_METHODS_DEMO_HPP
#define VIRTUAL_METHODS_DEMO_HPP

class Animal {
public:
    virtual ~Animal() = default;
    virtual void speak() const;
};

class Dog : public Animal {
public:
    ~Dog() override = default;
    void speak() const override;
};

class Cat : public Animal {
public:
    ~Cat() override = default;
    void speak() const override;
};

#endif // VIRTUAL_METHODS_DEMO_HPP