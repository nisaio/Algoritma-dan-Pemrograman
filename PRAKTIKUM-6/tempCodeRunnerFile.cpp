#include <iostream>
using namespace std;

void countCharacterFrequency(char arr[], int size) {
    int freq[256] = {0};
    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }
    cout << "Frekuensi karakter:\n";
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            cout << char(i) << ": " << freq[i] << endl;
            }
        }
    }
int main() {
    char characters[5] = {'a', 'b', 'a', 'c', 'a'};
    countCharacterFrequency(characters, 5);
}