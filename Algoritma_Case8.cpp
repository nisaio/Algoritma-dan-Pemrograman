#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int panjang, lebar, tinggi, HargaCat;
    double LuasDinding, JumlahCatLiter, TotalBiayaCat;

    HargaCat = 150000;

    cout << "Masukkan Input Panjang: " << endl;
    cin >> panjang;

    cout << "Masukkan Input Lebar: " << endl;
    cin >> lebar;

    cout << "Masukkan Input Tinggi: " << endl;
    cin >> tinggi;

    LuasDinding = 2 * (panjang + lebar) * tinggi;
    JumlahCatLiter = LuasDinding / 10;
    TotalBiayaCat = JumlahCatLiter * HargaCat;

    cout << fixed << setprecision(2) << TotalBiayaCat;

    return 0;
}
