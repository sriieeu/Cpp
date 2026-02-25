#include <iostream>
#include <ostream>
//
// Created by SRI CHARAN on 25-02-2026.
//
class Stove {
private:
    int temp=10;
    public:
    int getTemperature() {
        return temp;
    }
    void setTemperature(int temp) {
        this->temp=temp;
    }
};
int main () {
    Stove st;
    std::cout << st.getTemperature() << std::endl;
    st.setTemperature(100);
    std::cout << st.getTemperature() << std::endl;
}