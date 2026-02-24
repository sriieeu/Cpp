//
// Created by SRI CHARAN on 24-02-2026.
//

#include <iostream>
using namespace std;
int main () {
    string x = "x";
    string *xx =&x;
    cout << *xx << endl;
    string y[3]={"hq", "bye" ,"rai"};
    string *py =&y[1];
    cout << *py << endl;
}