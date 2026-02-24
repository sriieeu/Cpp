
//
// Created by SRI CHARAN on 24-02-2026.
//
#include <iostream>
template<typename T , typename D>
auto max( T a , D b) {
    return a > b ? a : b;

}
int main() {

    std::cout <<max(5.2 , 3) << "\n";
}