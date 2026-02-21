#include <iosfwd>
#include <iostream>

int main() {
    int a = 6;
    for (int i = 0 ; i < a; i++) {
        std::cout << i << std::endl;
    }
    int s = 20;
    int r = 100;
    std::cout<<s/(double) r<<std::endl;
    std::string z = "Hi";
    std::cout<< z << std::endl;
}
