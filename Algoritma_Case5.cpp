//Studi Kasus 5:Menetukan status berat badan Ideal sesuai BMI

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float height = 157;
    float weight = 50;
   
    // rumus bmi (berat badan (kg) / (tinggi (meter) * tinggi (meter))
    float bmi = weight / ((height / 100) * (height / 100));

    cout << "BMI : " << fixed << setprecision(2) << bmi << endl;
    cout << "Status Berat Badan Ideal : " << boolalpha << (bmi > 18.5 && bmi < 24.9);
   
    return 0;
}
