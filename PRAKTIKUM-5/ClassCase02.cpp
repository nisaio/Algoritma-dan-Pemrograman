//Fungsi rekursif (memanggil dirinya sendiri)

#include <iostream>

using namespace std;

void recursion() {

cout << "Halo." << endl;

recursion();

}

int main() {

recursion();

return 0;

}