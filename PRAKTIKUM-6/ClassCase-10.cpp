//

#include <iostream>
using namespace std;

int sumArrayRecursively(int arr[], int size) {
    if (size <= 0) return 0;
    return arr[size - 1] + sumArrayRecursively(arr, size - 1);
}
int main() {
    int numbers[5] = {1, 2, 3, 4, 5};
    int total = sumArrayRecursively(numbers, 5);
    cout << "Jumlah total elemen array: " << total << endl;
}