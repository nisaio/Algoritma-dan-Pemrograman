#include <iostream>
#include <iomanip>
using namespace std;

int main(){

        float panjang;
        float lebar;
        float tinggi;
        float volume;
        float luas_permukaan;

        cout << "Masukkan panjang balok: ";
        cin >> panjang;

        cout << "Masukkan lebar balok: ";
        cin >> lebar;

        cout << "Masukkan tinggi balok: ";
        cin >> tinggi;

        volume = panjang * lebar * tinggi;
        luas_permukaan = 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);

        cout << "============================================================" << endl;

        cout << left << setw(10) << "panjang" << left << setw(10) << "lebar" << left << setw(10) << "tinggi"
        << left << setw(15) << "volume" << left << setw(20) << "luas_permukaan" << endl;
        cout << left << setw(10) << panjang << left << setw(10) << lebar << left << setw(10) << tinggi
        << left << setw(15) << volume << left << setw(20) << luas_permukaan << endl;
        
        return 0;
}
