#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main () {
    string nama;
    double HargaAwal;
    double Diskon; 
    double HargaDiskon;

    cout << "Harga Barang: " << endl;
    cin >> HargaAwal;

    cout << "Masukkan Diskon: (%)" << endl;
    cin >> Diskon;

    double PotonganHarga = (Diskon / 100.0) * HargaAwal;
    double HargaAkhir =  HargaAwal - PotonganHarga;
   
    cout << "Besar Potongan Harga: Rp." << PotonganHarga << endl;
    cout << "Harga Setelah Diskon: Rp." << HargaAkhir << endl;

    return 0;
}