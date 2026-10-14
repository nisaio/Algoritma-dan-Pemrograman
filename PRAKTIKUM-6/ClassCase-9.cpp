//meng-output elemen dalam sebuah array

#include <iostream>
using namespace std;

void printArrayRecursively(int arr[], int size, int index = 0) {
    if (index < size) {
        cout << arr[index] << " ";
        printArrayRecursively(arr, size, index + 1);
    }
}
int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    cout << "Elemen array: ";
    printArrayRecursively(numbers, 5);
    cout << endl;
}