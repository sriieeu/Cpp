#include <iostream>
#include <string>
//
// Created by SRI CHARAN on 24-02-2026.
//
struct student {
    int age;
    std::string name;
};
int main() {
    student st;
    st.age = 5;
    st.name = "Student";
    std::cout << st.age << "\n";
    std::cout << st.name << "\n";
}