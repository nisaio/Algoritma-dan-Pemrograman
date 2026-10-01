#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int jumlah;
    double nilai[100];
    double total = 0;
    double rataRata;

    // Input jumlah mata pelajaran
    cout << "Masukkan jumlah mata pelajaran (minimal 3): ";
    cin >> jumlah;

    // Memastikan jumlah minimal 3
    while (jumlah < 3) {
        cout << "Jumlah mata pelajaran minimal 3!" << endl;
        cout << "Masukkan kembali jumlah mata pelajaran: ";
        cin >> jumlah;
    }

    // Input nilai setiap mata pelajaran
    for (int i = 0; i < jumlah; i++) {
        cout << "Masukkan nilai mata pelajaran ke-" << i + 1 << ": ";
        cin >> nilai[i];
        total += nilai[i];
    }

    // Menghitung rata-rata
    rataRata = total / jumlah;

    // Menampilkan rata-rata
    cout << fixed << setprecision(3);
    cout << "Rata-rata Nilai: " << rataRata << endl;

    // Menentukan kategori prestasi
    if (rataRata > 85) {
        cout << "Prestasi: Sangat Baik" << endl;
    }
    else if (rataRata >= 70) {
        cout << "Prestasi: Baik" << endl;
    }
    else if (rataRata >= 50) {
        cout << "Prestasi: Cukup" << endl;
    }
    else {
        cout << "Prestasi: Perlu Peningkatan" << endl;
    }


    return 0;
}
