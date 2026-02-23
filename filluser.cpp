//
// Created by SRI CHARAN on 23-02-2026.
//
#include <iostream>
int main() {
    std::string food[4];
    int size = sizeof(food) / sizeof(food[0]);
    std::string name;
    std::cout<<"enter the food you like or q to exit";
    for (int i =0 ; i<size ;i++) {
        std::cin>>name;
        if (name != "q") {
            food[i] = name;
        }
        else {
            break;
        }
    }

    for (int i =0 ; i<size ;i++) {
        std::cout<<food[i]<<std::endl;
    }
    return 0;
}