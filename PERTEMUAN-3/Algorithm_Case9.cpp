//Modifikasi konversisatuanpanjang

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int pilihanKonverensi;
    cout << left;
    cout << setw(30) << "=== Pilihan Konversi===" << endl;
    cout << setw(30) << "1. SentiMeter" << endl;
    cout << setw(30) << "2. MiliMeter" << endl;
    cout << setw(30) << "3. KiloMeter" << endl;

    cout << endl;
    cout << setw(30) << "Masukkan pilihan Tujuan Konverensi" << ": ";
    cin >> pilihanKonverensi;
    cout << setw(10) << "Meter";
    switch (pilihanKonverensi)
    {
    case 1:
        cout << setw(10) << "Sentimeter";
        break;
    case 2:
        cout << setw(10) << "Milimeter";
        break;
    case 3:
        cout << setw(10) << "KiloMeter";
        break;
    default:
        cout << "Input Tidak Valid!!";
        return 0;
        break;
    }

    cout << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << setw(10) << i;
        switch (pilihanKonverensi)
        {
        case 1:
            cout << setw(10) << i * 100;
            break;
        case 2:
            cout << setw(10) << i * 1000;
            break;
        case 3:
            cout << setw(10) << fixed << setprecision(3) << (float)i / 1000;
            break;
        }
        cout << endl;
    }
}