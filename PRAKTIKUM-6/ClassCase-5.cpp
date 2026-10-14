//Mengetahui berapa  jumlah elemen huruf vokal

#include <iostream>
using namespace std;

int countVowels(char arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u') {
            count++;
        }
    }
return count;
}
int main() {
    char letters[5] = {'a', 'b', 'c', 'e', 'i'};
    cout << "Jumlah vokal: " << countVowels(letters, 5) << endl;
}