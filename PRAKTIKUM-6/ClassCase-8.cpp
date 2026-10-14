//Membalik ururtan 

#include <iostream>
using namespace std;

void printReverse(int arr[], int size) {
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int numbers[5] = {1, 2, 3, 4, 5};
    cout << "Bilangan terbalik: ";
    printReverse(numbers, 5);
}