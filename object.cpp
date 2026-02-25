#include <iostream>
#include <string>
//
// Created by SRI CHARAN on 25-02-2026.
//
class Human {
    public:
    int age;
    std::string  name;

    void eat() {
        std::cout << "eat" <<"\n";
    }
    void drink() {
        std::cout << "drink" <<"\n";
    }
};
int main () {
    Human h1;
    h1.name = "Human";
    h1.age = 18;
    h1.eat();
    h1.drink();
    std::cout << h1.name << std::endl;
}