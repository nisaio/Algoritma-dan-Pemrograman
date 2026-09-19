//Menentukan rata-rata suhu

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float suhu[5];
    float total = 0;
    float rataRata;

    for (int i = 0; i < size(suhu); i++)
    {
        cout << "masukkan Suhu ke-" << i+1 << " (Celcius): ";
        cin >> suhu[i];
        total += suhu[i];
    }
    rataRata = total/size(suhu);
    cout << "==========================" << endl << left;
    cout << setw(15) << "Rata-rata Suhu " << ": " << fixed << setprecision(1) << rataRata << endl;

    if(rataRata > 30)
        cout << setw(15) << "Kondisi Suhu " << ": " << "Cuaca Panas" << endl;
    else if(rataRata <= 30 && rataRata >= 20)
        cout << setw(15) << "Kondisi Suhu " << ": " << "Cuaca Normal" << endl;
    else
        cout << setw(15) << "Kondisi Suhu " << ": " << "Cuaca Dingin" << endl;
}