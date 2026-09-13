#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double jarak, konsumsi, harga, totalBiaya;

    cout << "Jarak Tempuh (km): " << endl;
    cin >> jarak;
    cout << "Konsumsi Bahan Bakar (km/l): " << endl;
    cin >> konsumsi;
    cout << "Harga Bahan Bakar (Rp/l): " << endl;
    cin >> harga;

    totalBiaya = (jarak / konsumsi) * harga;

    cout << fixed << setprecision(2);
    cout << "Total Biaya Bahan Bakar: Rp " << totalBiaya << endl;

    return 0;
}
