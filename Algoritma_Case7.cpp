#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double jarak, konsumsi, harga, totalBiaya;

    cout << "Jarak Tempuh (km): ";
    cin >> jarak;
    cout << "Konsumsi Bahan Bakar (km/l): ";
    cin >> konsumsi;
    cout << "Harga Bahan Bakar (Rp/l): ";
    cin >> harga;

    totalBiaya = (jarak / konsumsi) * harga;

    cout << fixed << setprecision(2);
    cout << "Total Biaya Bahan Bakar: Rp " << totalBiaya << endl;
    
    return 0;
}
