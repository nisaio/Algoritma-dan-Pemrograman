//Standardeviasi tapi ada jenis variasinya Rendah, sama tinggi

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double angka[5];
    double total = 0;
    double rataRata;
    double totalSelisihKuadrat = 0;

    for (int i = 0; i < size(angka); i++)
    {
        cout << "masukkan angka ke-" << i+1 << " : ";
        cin >> angka[i];
        total += angka[i];
    }

    rataRata = total/size(angka);

    for (int i = 0; i < size(angka); i++)
    {
        totalSelisihKuadrat += (angka[i]-rataRata)*(angka[i]-rataRata);
    }

    cout << "==========================" << endl << left;
    cout << setw(15) << "Rata-rata" << ": " << fixed << setprecision(2) << rataRata << endl;
    cout << setw(15) << "Standar Deviasi" << ": " << fixed << setprecision(2) << sqrt(totalSelisihKuadrat/size(angka)) << endl;
    cout << setw(15) << "Variasi" << ": Variasi " << (sqrt(totalSelisihKuadrat/size(angka))>2? "Tinggi" : "Rendah") << endl;
}