//Studi Kasus 3:Menghitung Volume dan Luas Permukaan sebuah Balok

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

        float panjang;
        float lebar;
        float tinggi;
        float volume;
        float luas_permukaan;

        cout << "Masukkan panjang balok: " << endl;
        cin >> panjang;

        cout << "Masukkan lebar balok: " << endl;
        cin >> lebar;

        cout << "Masukkan tinggi balok: " << endl;
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
