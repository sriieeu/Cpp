//
// Created by SRI CHARAN on 22-02-2026.
//

#include <iostream>
#include <random>
using namespace std;

int main () {
    srand(time(NULL));
    int num = rand() % 100;
    std::cout << num << std::endl;
}