#include <iostream>
using namespace std;
// Grandparent class
class Animal {
public:
    virtual void make_sound() {
        // default implementation or leave it pure virtual for abstract class
    }
};
// Parent class inheriting from Animal
class Mammal : public Animal {
public:
    void give_birth() {
        // implementation for giving birth
    }
};
// Another parent class inheriting from Animal
class Bird : public Animal {
public:
    void lay_eggs() {
        // implementation for laying eggs
    }
};
// Child class inheriting from Mammal
class Dog : public Mammal {
public:
    void make_sound() override {
        std::cout << "Woof!" << std::endl;
    }
};
// Child class inheriting from Bird
class Parrot : public Bird {
public:
    void make_sound() override {
        std::cout << "Squawk!" << std::endl;
    }
};
// Grandchild class inheriting from both Dog and Parrot
class Hybrid : public Dog, public Parrot {
public:
    void make_sound() override {
        std::cout << "Hybrid sound!" << std::endl;
    }
};
int main() {

    Hybrid hybrid;

    // Accessing methods of all classes in the hierarchy
    hybrid.make_sound();    // Accessing method from Hybrid
    hybrid.give_birth();    // Accessing method from Mammal
    hybrid.lay_eggs();      // Accessing method from Bird

    return 0;

}