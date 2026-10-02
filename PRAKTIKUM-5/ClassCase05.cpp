//Fungsi ....

#include <iostream>
using namespace std;

void displayFactorial(int n) {

int factorial = 1;

for (int i = 1; i <= n; i++) {

factorial *= i;

cout << "Faktorial dari " << i << " adalah " << factorial << endl;

}

}

int main() {

int num = 5;

displayFactorial(num);

return 0;

}