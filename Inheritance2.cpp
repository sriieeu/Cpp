#include <iostream>
#include <ostream>
//
// Created by SRI CHARAN on 25-02-2026.
//
class Shape {
    public:
    int side;
    int radius;
};

class cube : public Shape {
    public:
        int area;
        int volume;
        cube(int side) {
            area = 4 * side * side;
            volume = 6 * side * side;
        }

};
class Sphere : public Shape {
    public:
    int area;
    int volume;
    Sphere(int radius) {
        area = 4* 3.14 * radius * radius;
        volume = (4/3.0) *3.14 * radius * radius;
    }
};
int main() {
    cube cube(5);
    std::cout<<cube.area<<std::endl;
    std::cout<<cube.volume<<std::endl;
    Sphere sphere(5);
    std::cout<<sphere.area<<std::endl;
    std::cout<<sphere.volume<<std::endl;
}