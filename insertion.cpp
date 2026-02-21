//
// Created by SRI CHARAN on 21-02-2026.
//
#include <iostream>
int main() {
    std::string name;
    int age;
    std::cout << "Whats your name?" << std::endl;
   std::getline(std::cin , name);
    std::cout<< "Whats your age"<<std::endl;
    std::cin>>age;
    std::cout << "hi " + name  << std::endl;
    std::cout << age;
    return 0;
}