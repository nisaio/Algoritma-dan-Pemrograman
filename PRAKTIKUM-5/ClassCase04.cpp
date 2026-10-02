//Fungsi Rekursif

#include <iostream>
using namespace std;

void printStars(int n) {

if (n <= 0) return;

printStars(n - 1);

for (int i = 0; i < n; i++) {

cout << "* ";
}

cout << endl;
}

int main() {

int rows = 5;

printStars(rows);

return 0;

}