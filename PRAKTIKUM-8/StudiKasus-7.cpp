#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <limits>
using namespace std;

struct Proyek {
    string nama;
    long long anggaran;
    int pekerja;
};

void tampilkanProyek(const vector<Proyek>& daftar) {
    for (int i = 0; i < daftar.size(); i++) {
        cout << "Proyek " << i + 1 << ": \"" << daftar[i].nama
             << "\", Anggaran: Rp " << daftar[i].anggaran
             << ", Pekerja: " << daftar[i].pekerja << endl;
    }
}

int main() {
    int n;

    cout << "Masukkan jumlah proyek: ";
    cin >> n;

    if (n <= 0) {
        cout << "Jumlah proyek harus lebih dari 0." << endl;
        return 0;
    }

    vector<Proyek> daftar(n);

    cout << "Masukkan data proyek:" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Nama proyek " << i + 1 << ": ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, daftar[i].nama);

        cout << "Anggaran: Rp ";
        cin >> daftar[i].anggaran;

        cout << "Jumlah pekerja: ";
        cin >> daftar[i].pekerja;
    }

    cout << "\nTambahkan proyek baru:" << endl;

    Proyek baru;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Nama proyek: ";
    getline(cin, baru.nama);

    cout << "Anggaran: Rp ";
    cin >> baru.anggaran;

    cout << "Jumlah pekerja: ";
    cin >> baru.pekerja;

    daftar.push_back(baru);

    cout << "\nDaftar proyek setelah penambahan:" << endl;
    tampilkanProyek(daftar);

    int indeks;

    cout << "\nIndeks proyek yang dihapus (mulai dari 1): ";
    cin >> indeks;

    if (indeks >= 1 && indeks <= daftar.size()) {
        daftar.erase(daftar.begin() + indeks - 1);
        cout << "\nDaftar proyek setelah penghapusan:" << endl;
        tampilkanProyek(daftar);
    } else {
        cout << "Indeks proyek tidak valid." << endl;
        return 0;
    }

    long long totalAnggaran = 0;
    int totalPekerja = 0;
    int terbesar = 0;

    for (int i = 0; i < daftar.size(); i++) {
        totalAnggaran += daftar[i].anggaran;
        totalPekerja += daftar[i].pekerja;

        if (daftar[i].anggaran > daftar[terbesar].anggaran) {
            terbesar = i;
        }
    }

    double rataRata = (double) totalPekerja / daftar.size();

    cout << "\nTotal anggaran seluruh proyek: Rp "
         << totalAnggaran << endl;

    cout << "Rata-rata jumlah pekerja per proyek: "
         << fixed << setprecision(2) << rataRata << endl;

    cout << "Proyek dengan anggaran terbesar: \""
         << daftar[terbesar].nama << "\" (Rp "
         << daftar[terbesar].anggaran << ")" << endl;

    return 0;
}
