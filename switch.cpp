//
// Created by SRI CHARAN on 22-02-2026.
//

#include <cstdlib>
#include <iostream>
using namespace std;
int main() {
    srand(time(NULL));
    int val = rand()%5;
    switch (val) {
        case 0:
            cout<<0 << endl;
            break;
        case 1:
            cout<<1<<endl;
            break;
        case 2:
            cout<<2<<endl;
                break;
        case 3:
            cout<<3<<endl;
            break;
        case 4:
            cout<<4<<endl;
            break;
        case 5:
            cout<<5<<endl;
            break;

    }

}
