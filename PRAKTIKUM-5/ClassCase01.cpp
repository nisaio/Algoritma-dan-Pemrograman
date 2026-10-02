//Fungsi Pass-by-value (Perubahan/output 
//hanya akan disimpan di dalam fungsi itu sendiri)
//Kecuali jika ditambahkan &

#include <iostream>

using namespace std;

void calculateSquare(int number) {

number *= number;

}

int main() {

int num = 5;

calculateSquare(num);

cout << "Kuadrat dari " << num << " adalah " << num << endl;

return 0;

}