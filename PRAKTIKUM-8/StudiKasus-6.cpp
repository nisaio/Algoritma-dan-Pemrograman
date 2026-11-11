#include <iostream>
#include <string>

using namespace std;

struct Proyek {
    string nama;
    double anggaran;
    int pekerja;
};

int main() {
    Proyek* daftarProyek = nullptr;
    int jumlahProyek = 0;
    int pilihan;

    do {
        cout << "\n=== MANAJEMEN DATA PROYEK ===" << endl;
        cout << "1. Tambah Data Proyek" << endl;
        cout << "2. Hapus Data Proyek" << endl;
        cout << "3. Tampilkan Data dan Statistik" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih menu (1-4): ";
        cin >> pilihan;

        if (pilihan == 1) {
            string namaBaru;
            double anggaranBaru;
            int pekerjaBaru;

            cout << "Masukkan nama proyek: ";
            cin.ignore();
            getline(cin, namaBaru);
            cout << "Masukkan anggaran proyek: ";
            cin >> anggaranBaru;
            cout << "Masukkan jumlah pekerja: ";
            cin >> pekerjaBaru;

            if (anggaranBaru < 0 || pekerjaBaru < 0) {
                cout << "Error: Anggaran dan jumlah pekerja tidak boleh negatif!" << endl;
            } else {
                Proyek* temp = new Proyek[jumlahProyek + 1];
                
                for (int i = 0; i < jumlahProyek; i++) {
                    temp[i] = daftarProyek[i];
                }
                
                temp[jumlahProyek].nama = namaBaru;
                temp[jumlahProyek].anggaran = anggaranBaru;
                temp[jumlahProyek].pekerja = pekerjaBaru;

                delete[] daftarProyek;
                daftarProyek = temp;
                jumlahProyek++;
                
                cout << "Data proyek berhasil ditambahkan!" << endl;
            }
        } 
        else if (pilihan == 2) {
            if (jumlahProyek == 0) {
                cout << "Error: Array kosong, tidak ada data proyek untuk dihapus." << endl;
            } else {
                int nomorHapus;
                cout << "Masukkan nomor proyek yang akan dihapus (1 - " << jumlahProyek << "): ";
                cin >> nomorHapus;

                if (nomorHapus < 1 || nomorHapus > jumlahProyek) {
                    cout << "Error: Indeks/nomor proyek tidak valid!" << endl;
                } else {
                    Proyek* temp = nullptr;
                    
                    if (jumlahProyek > 1) {
                        temp = new Proyek[jumlahProyek - 1];
                        int indeksTemp = 0;
                        for (int i = 0; i < jumlahProyek; i++) {
                            if (i == (nomorHapus - 1)) continue;
                            
                            temp[indeksTemp] = daftarProyek[i];
                            indeksTemp++;
                        }
                    }
                    
                    delete[] daftarProyek;
                    daftarProyek = temp;
                    jumlahProyek--;
                    
                    cout << "Data proyek berhasil dihapus!" << endl;
                }
            }
        } 
        else if (pilihan == 3) {
            if (jumlahProyek == 0) {
                cout << "Tidak ada proyek yang dimasukkan (data masih kosong)." << endl;
            } else {
                double totalAnggaran = 0;
                int totalPekerja = 0;
                double anggaranTerbesar = daftarProyek[0].anggaran;
                string namaProyekTerbesar = daftarProyek[0].nama;

                cout << "\n--- DAFTAR PROYEK ---" << endl;
                for (int i = 0; i < jumlahProyek; i++) {
                    cout << i + 1 << ". " << daftarProyek[i].nama 
                         << " | Anggaran: " << daftarProyek[i].anggaran 
                         << " | Pekerja: " << daftarProyek[i].pekerja << endl;
                    
                    totalAnggaran += daftarProyek[i].anggaran;
                    totalPekerja += daftarProyek[i].pekerja;

                    if (daftarProyek[i].anggaran > anggaranTerbesar) {
                        anggaranTerbesar = daftarProyek[i].anggaran;
                        namaProyekTerbesar = daftarProyek[i].nama;
                    }
                }

                double rataPekerja = (double)totalPekerja / jumlahProyek;
                
                cout << "\n--- STATISTIK PROYEK ---" << endl;
                cout << "Total Anggaran Seluruh Proyek: " << totalAnggaran << endl;
                cout << "Rata-rata Pekerja per Proyek: " << rataPekerja << endl;
                cout << "Proyek Anggaran Terbesar: " << namaProyekTerbesar 
                     << " (" << anggaranTerbesar << ")" << endl;
            }
        }
    } while (pilihan != 4);

    cout << "Program selesai." << endl;
    delete[] daftarProyek;
    return 0;
}