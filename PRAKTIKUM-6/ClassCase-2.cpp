//Mencari nilai tertinggi

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int maxVal = 0;

    for (int i = 0; i < 5; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    cout << "Nilai terbesarL: " << maxVal << endl;
}