#include <iostream>
#include <string>
//
// Created by SRI CHARAN on 25-02-2026.
//
class Student {
public:
    int age;
    std::string name;
    Student(std::string name , int age) {
        this->name=name;
        this->age=age;
    }
    void run() {
        std::cout<<"run"<<std::endl;
    }
};
int main() {
    Student s1("sri" ,21);
    s1.run();
    std::cout<<s1.name<<std::endl;
    std::cout<<s1.age<<std::endl;
    return 0;
}