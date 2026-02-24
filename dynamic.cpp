#include <cstddef>
#include <iostream>
#include <ostream>
//
// Created by SRI CHARAN on 24-02-2026.
//
using namespace std;
int main () {
    int *val =NULL;
    val = new int;
    *val = 10;
    std::cout << *val << endl;
    std::cout << val << std::endl;
    delete val;
}