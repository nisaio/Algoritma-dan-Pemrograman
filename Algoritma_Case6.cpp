//Studi Kasus 6:Menghitung suhu rata-rata harian

#include <iostream>
#include <iomanip>
using namespace std;

float input_suhu(int hari) {
    float suhu;
   
    cout << "Suhu Hari " << hari << ": ";
    cin >> suhu;

    return suhu;
}

int main() {
    float total_suhu, average; //average=rata-rata

    for (int i = 0; i<5; i++) {
        total_suhu += input_suhu(i+1);
    }

    average = total_suhu / 5;
    cout << "Rata-rata Suhu: " << average;

    return 0;
}
