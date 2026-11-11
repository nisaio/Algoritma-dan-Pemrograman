#include <iostream>
using namespace std;

int main() {
    int jumlah;
    int harga[100];    // array untuk menyimpan harga tiap barang
    int diskon[100];   // array untuk menyimpan diskon tiap barang
    int total = 0;

    // 1. Minta jumlah barang
    cout << "Masukkan jumlah barang: ";
    cin >> jumlah;

    // 2. Isi array harga
    for (int i = 0; i < jumlah; i++) {
        cout << "Masukkan harga barang " << i + 1 << ": ";
        cin >> harga[i];
    }

    cout << endl;

    // 3. Tentukan diskon, simpan di array diskon, lalu tampilkan
    for (int i = 0; i < jumlah; i++) {
        if (harga[i] >= 750000) {
            diskon[i] = 10;
        } else if (harga[i] >= 500000) {
            diskon[i] = 5;
        } else {
            diskon[i] = 0;
        }

        if (diskon[i] == 0) {
            cout << "Diskon untuk barang " << i + 1 << ": Tidak ada diskon" << endl;
        } else {
            cout << "Diskon untuk barang " << i + 1 << ": " << diskon[i] << "%" << endl;
        }

        // 4. Tambahkan harga setelah diskon ke total
        total = total + harga[i] - harga[i] * diskon[i] / 100;
    }

    cout << "Total harga setelah diskon: " << total << endl;

    return 0;
}