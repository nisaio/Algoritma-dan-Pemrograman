#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int apakahLanjut = 1;
    float penggunaanDayaListrik;
    float hargaPerKwh;
    float hargaTotal;

    do
    {
        cout << "Masukkan penggunaan listrik (kWh) : ";
        cin >> penggunaanDayaListrik;

        if (penggunaanDayaListrik <= 100)
            hargaPerKwh = 1500;
        else if (penggunaanDayaListrik > 100 && penggunaanDayaListrik <= 300)
            hargaPerKwh = 2000;
        else
            hargaPerKwh = 3000;

        hargaTotal = hargaPerKwh * penggunaanDayaListrik;

        cout << endl << fixed << setprecision(2);
        cout << "Total penggunaan listrik       : " << penggunaanDayaListrik << " kWh" << endl;
        cout << "Total tagihan sebelum diskon   : Rp " << hargaTotal << endl;
        cout << "Diskon                         : Rp " << (hargaTotal > 1000000 ? hargaTotal * 10 / 100 : 0) << endl;
        cout << "Total tagihan setelah diskon   : Rp " << (hargaTotal > 1000000 ? hargaTotal * 90 / 100 : hargaTotal) << endl;

        cout << endl;
        cout << "Ingin menambah belanjaan lagi?(1.iya,selain itu tidak) : ";
        cin >> apakahLanjut;
        cout << endl;
    } while (apakahLanjut == 1);

    return 0;
}
