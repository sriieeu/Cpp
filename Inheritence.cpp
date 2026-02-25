
//
// Created by SRI CHARAN on 25-02-2026.

#include <iostream>
#include <ostream>
#include <string>

class Animal {
    public:
    int age =21;
    std::string type;
    void eat() {
        std::cout << "eat" << std::endl;
    }
};
class Dog : public Animal {
    public:
    int age=2;
    std::string type="Golden retriever";
    void eat() {
        std::cout << "Dog eat" << std::endl;
    }

};
int main() {
    Dog d;
    std::cout << d.age << std::endl;
}
