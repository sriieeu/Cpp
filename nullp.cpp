#include <iostream>
#include <ostream>
//
// Created by SRI CHARAN on 24-02-2026.
//
using namespace std;
int main() {
    int *alpha =nullptr;
    int x= 123;
     // alpha = &x;
    if (alpha == nullptr) {
        std::cout << "Fail" << endl;
    }
    cout << *alpha << endl;
    return 0;
}