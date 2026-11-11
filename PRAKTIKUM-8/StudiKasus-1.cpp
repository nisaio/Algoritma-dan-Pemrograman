#include <iostream>
using namespace std;

int main() {
    int jumlah;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlah;

    // Jika user memasukkan 0 (atau negatif), tampilkan pesan lalu selesai
    if (jumlah <= 0) {
        cout << "\nTidak ada data mahasiswa." << endl;
        return 0;
    }

    // Alokasi array dinamis
    double *nilai = new double[jumlah];

    cout << "Masukkan nilai mahasiswa:" << endl;
    for (int i = 0; i < jumlah; i++) {
        cout << "Mahasiswa " << i + 1 << ": ";
        cin >> nilai[i];
    }

    // Hitung total, nilai minimum, nilai maksimum
    double total = 0;
    double minimum = nilai[0];
    double maksimum = nilai[0];

    for (int i = 0; i < jumlah; i++) {
        total += nilai[i];
        if (nilai[i] < minimum) minimum = nilai[i];
        if (nilai[i] > maksimum) maksimum = nilai[i];
    }

    double rataRata = total / jumlah;

    // Output  yang ditampilkan 
    cout << endl;
    cout << "Nilai rata-rata : " << rataRata << endl;
    cout << "Nilai minimum   : " << minimum << endl;
    cout << "Nilai maksimum  : " << maksimum << endl;

    // Bebaskan memori
    delete[] nilai;

    return 0;
}