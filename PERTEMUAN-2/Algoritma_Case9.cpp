//Studi Kasus 9:Menyusun tabel konversi satuan Panjang (KM,M,CM,MM)

#include <iostream>
#include <iomanip>
using namespace std;

void baris(float m, int w) {
    float cm = m * 100;
    float mm = m * 1000;
    float km = m / 1000;

    cout << left << setw(w) << m << left << setw(w) << cm << left << setw(w) << mm << left << setw(w) << km << endl;
}

int main() {
    int w = 13;
    int n_meter = 10;

    cout  << left << setw(w) << "Meter"  << left << setw(w) << "Sentimeter"  << left << setw(w) << "Milimeter"  << left << setw(w) << "Kilometer" << endl;
    for (float i=0; i<n_meter; i++) { //for itu buat loop alias pengulangan
        baris(i+1, w);
    }

    return 0;
}
