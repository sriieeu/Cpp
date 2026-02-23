#include <iostream>
#include <ostream>

int main() {

    int arr[] = { 1 , 3 , 2 , 9 , 7 ,0 , 9};
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i =0 ; i<size; i++) {
        for (int j =i ; j<size; j++) {
            if (arr[i]>arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i =0 ; i<size; i++) {
        std::cout<<arr[i]<<" ";
    }

return 0;}
