#include <iostream>

using namespace std;

int main() {
    int jumlah;
    string nama[100];       // array nama produk
    int harga[100];         // array harga satuan
    int terjual[100];       // array jumlah terjual
    int pendapatan[100];    // array pendapatan tiap produk
    int total = 0;

    cout << "Masukkan jumlah produk: ";
    cin >> jumlah;

    cout << "Masukkan data produk (nama produk, harga satuan, jumlah terjual):" << endl;
    for (int i = 0; i < jumlah; i++) {
        cout << "Produk " << i + 1 << endl;
        cout << "  Nama     : ";
        cin >> nama[i];
        cout << "  Harga    : ";
        cin >> harga[i];
        cout << "  Terjual  : ";
        cin >> terjual[i];

        // pendapatan = harga x jumlah terjual
        pendapatan[i] = harga[i] * terjual[i];
        total = total + pendapatan[i];
    }

    // Cari produk dengan pendapatan tertinggi
    int tertinggi = 0;  // menyimpan indeks produk tertinggi
    for (int i = 1; i < jumlah; i++) {
        if (pendapatan[i] >= pendapatan[tertinggi]) {
            tertinggi = i;
        }
    }

    cout << endl;
    cout << "Total pendapatan: Rp." << total << endl;
    cout << "Rata-rata pendapatan per produk: Rp." << total / jumlah << endl;
    cout << "Produk dengan pendapatan tertinggi: \"" << nama[tertinggi]
         << "Rp.\" (" << pendapatan[tertinggi] << ")" << endl;

    return 0;
}