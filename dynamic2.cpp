//
// Created by SRI CHARAN on 24-02-2026.
//
#include <iostream>

int main() {
    char *arr=NULL;
    int size;
    std::cin>>size;
    arr = new char[size];
    for (int i=0; i<size; i++) {
        std::cin>>arr[i];
    }
    for (int i=0; i<size; i++) {
        std::cout<<arr[i];
    }
delete arr;
    return 0;
}