//
// Created by SRI CHARAN on 24-02-2026.
//

#include <iostream>
using namespace std;
void swap (string &x, string &y);
int main() {
    string x = " World!";
    string y = "Hello ";
    swap (x, y);
    cout << x << endl;
    cout << y << endl;
}
void swap (string &x, string &y) {
    string temp = x;
    x = y;
    y = temp;
}