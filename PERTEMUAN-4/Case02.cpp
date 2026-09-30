#include <iostream>
using namespace std;


int main() {
    int hadir;
    int totalHadir;
    int persentase;
    int lanjut = 1;
   
    do {
        totalHadir = 0;
        for (int hari = 1; hari <= 5; hari++) {
            cout << "Apakah mahasiswa hadir di hari ke-" << hari << "? (1 untuk hadir, 0 untuk tidak hadir): ";
            cin >> hadir;
           
            totalHadir += hadir;
        }
       
        persentase = (totalHadir * 100) / 5;
       
        cout << "Persentase Kehadiran: " << persentase << "%" << endl;
       
        if (persentase > 75) {
            cout << "Status Kehadiran: Baik" << endl;
        }
        else if (persentase >= 50) {
            cout << "Status Kehadiran: Cukup" << endl;
        }
        else {
            cout << "Status Kehadiran: Kurang" << endl;
        }
       
        cout << "Ingin mengecek kehadiran untuk mahasiswa lain? " << "(1 untuk ya, selain itu untuk tidak): ";
        cin >> lanjut;
   
    } while (lanjut == 1);
   
    return 0;
}
