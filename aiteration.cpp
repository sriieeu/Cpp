#include <iostream>
int main() {
    std::string names[] = {"sri" , "neha" , "rishik"};
    for (int i=0; i<sizeof(names)/sizeof(names[0]);i++) {
        std::cout<<names[i]<<"\n";
    }
    return 0;
}