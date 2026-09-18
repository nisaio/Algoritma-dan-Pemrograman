//Studi Kasus 4:Konverter Mata Uang (Memilih mata uang tujuan konversi) dolar euro yen rial 

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double rupiah;
    double hasil;
    int pilihan;

    double KURS_USD = 17000;
    double KURS_EUR = 20000;
    double KURS_SAR = 4000;

    cout << "===KONVERSI MATA UANG===" << endl;
    cout << "Masukkan jumlah Rupiah: " << endl;
    cin >>  rupiah;

    cout << "===============================" << endl;
    cout << "Pilih mata uang tujuan konversi" << endl;
    cout << "-------------------------------" << endl;
    cout << left << setw(8) << "1. Dollar" << setw(10) << right << "2.Euro" << right << setw(12) << "3.Rial" << endl;  
    cout << "===============================" << endl;
    cout << "Masukkan pilihan anda: " << endl;
    cin >> pilihan; 
    cout << "===================" << endl;

 switch (pilihan){
    case 1:
        hasil = rupiah / KURS_USD;
        cout << "Jumlah Rupiah: " << rupiah << endl;
        cout << "Hasil konversi: $" << hasil << endl;
        break;
    
    case 2:
        hasil = rupiah / KURS_EUR;
        cout << "Jumlah Rupiah: " << rupiah << endl;
        cout << "Hasil konversi: " << hasil << endl;
        break;
    case 3:
        hasil = rupiah / KURS_SAR;
        cout << "Jumlah Rupiah: " << rupiah << endl;
        cout << "Hasil konversi: " << hasil << endl;
        break;
    }
   
    cout << fixed << setprecision(2); //Fixed digunakan agar nominal yg dikeluarkan berupa angka sebenarnya
    return 0;
    
}