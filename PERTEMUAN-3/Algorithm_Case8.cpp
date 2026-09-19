//Menghitung harga cat yg dibutuhkan

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float panjang;
    float lebar;
    float tinggi;
    float hargaCat;

    float luasPermukaan;

    cout << "masukkan panjang ruangan    : ";
    cin >> panjang;
    cout << "masukkan lebar ruangan      : ";
    cin >> lebar;
    cout << "masukkan tinggi ruangan     : ";
    cin >> tinggi;
    cout << "masukkan harga cat per liter: ";
    cin >> hargaCat;

    luasPermukaan = (float)2 * (panjang * tinggi + lebar * tinggi);
    cout << "============================================" << endl
         << left;
    cout << setw(30) << "Luas Dinding" << ": " << fixed << setprecision(2) << luasPermukaan << " m^2" << endl;
    cout << setw(30) << "Cat yang Dibutuhkan " << ": " << fixed << setprecision(2) << luasPermukaan / 10 << " liter" << endl;
    cout << setw(30) << "Total Biaya Cat " << ": Rp " << fixed << setprecision(2) << luasPermukaan / 10 * hargaCat << endl;
    if (luasPermukaan / 10 > 10)
        cout << setw(30) << "Status Kebutuhan Cat" << ": " << "Banyak" << endl;
    else if (luasPermukaan / 10 <= 10 && luasPermukaan / 10 >= 5)
        cout << setw(30) << "Status Kebutuhan Cat" << ": " << "Sedang" << endl;
    else if (luasPermukaan < 5 && luasPermukaan > 0)
        cout << setw(30) << "Status Kebutuhan Cat" << ": " << "Sedikit" << endl;
    else
        cout << setw(30) << "Status Kebutuhan Cat" << ": " << "Tidak ada" << endl;
}