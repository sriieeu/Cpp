#include <iostream>
#include <ostream>
#include <string>
//
// Created by SRI CHARAN on 23-02-2026.
//
int main() {
    int size = 30;
    std::string food[size];
    fill(food, food+ size/2, "pizza");
    fill(food+size/2,food+size,"burger");
    for (int i =0 ; i<size;i++) {
        std::cout << food[i] << std::endl;
    }
}
