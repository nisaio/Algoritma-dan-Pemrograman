#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
    const int n = 5;
    double nilai[n];
    double total = 0;

    for (int i = 0; i < n; i++){
        cout << "Angka " << i + 1 << ": ";
        cin >> nilai[i];
        total += nilai[i];
    }

    double RataRata = total / n;

    double sum = 0;
    for (int i = 0; i < n; i++) {
        double selisih = nilai[i] - RataRata;
        sum += selisih* selisih;
    }

    double variasi = sum / (n - 1);

    double deviasi = variasi;
    if (deviasi > 0){
        double tebakan = deviasi / 2;
        double akurat = 0;
        for (int i = 0; i < 10; i++){
            akurat = (tebakan + (deviasi / tebakan)) / 2;
            tebakan = akurat;
        }
        deviasi = akurat;
    } else {
        deviasi = 0;
    }

    cout << fixed << setprecision(2);
    cout << "Hasil Deviasi adalah: " << fixed << setprecision(2) << deviasi << endl;
    cout << "Hasil Rata-Rata adalah: " << fixed << setprecision(2) << RataRata;    

    return 0;
}
