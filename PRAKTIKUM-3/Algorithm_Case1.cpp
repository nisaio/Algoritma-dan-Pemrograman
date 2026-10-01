//Sistem penggajian karyawan tapi sesuai jabatan

#include <iostream>
#include <string> //buat manggil library variabel teks
#include <cmath> //Buat manggil  library rumus matematika
#include <iomanip> //Buat library layout output

using namespace std;
int main() {
    string Nama;
    string Posisi;
    int JamKerja;
    int TarifPerJam;

    cout << "===== DATA GAJI KARYAWAN ====" << endl;

    cout << "Nama Karyawan: " << endl;
    cin >> Nama;
    cout << "Posisi Jabatan: " << endl;
    cin >> Posisi;
    cout << "Jam Kerja: " << endl;
    cin >> JamKerja;

    if (Posisi == "Magang"){ //== (Apakah sama dengan ini)
        TarifPerJam = 50000;//= (Nilai tarif per jam diisi sama ini)
    }
    else if (Posisi == "stafjunior"){
        TarifPerJam = 1000000;
    }
    else if (Posisi == "stafsenior"){
        TarifPerJam = 150000;
    }
    else if (Posisi == "teamleader"){
        TarifPerJam = 200000;
    }
    else if (Posisi == "kepaladepartemen"){
        TarifPerJam = 250000;
    }
    else{
        cout << "Posisi tidak valid. "; //misal yang posisi yg dimasukin gada di opsi ntar keluar ini
    }

    int Total = JamKerja * TarifPerJam;

    cout << "Selamat " << Nama << " gaji kamu adalah: Rp" << Total << ".00";
    return 0;
}