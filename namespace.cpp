//
// Created by SRI CHARAN on 09-02-2026.
//
#include <iostream>
namespace first {
    int x =0;
}

int main() {
    using namespace std;
    int x=1;
    std::cout<<x<<std::endl;
    std::cout<< first::x<<std::endl;
        return 0;
}