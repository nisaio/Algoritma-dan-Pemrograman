#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;
int main() {
    string Nama;
    int JamKerja;
    int TarifPerJam;

    cout << "Nama Karyawan: " << endl;
    cin >> Nama;
    cout << "Jam Kerja: " << endl;
    cin >> JamKerja;
    cout << "Tarif Per Jam: "<< endl;
    cin >> TarifPerJam;
    int Total = JamKerja * TarifPerJam;

    cout << left << setw(10) << "Nama" << setw(14) << "Jam Kerja" <<  setw(18) << "Tarif Per Jam" << right << setw(10) << "Gaji Total" << endl;
    cout << string(53,'-') << endl;
    cout << left << setw(10) << Nama << setw(14) << JamKerja << setw(18) << TarifPerJam << right <<  setw(10) << Total << endl;
    return 0;
}