//MENGHITUNG VOLUME DAN LUASPERMUKAAN BALOK
//Modifikasi: Memilih bidang dan dihitung sesuai rumus bidang tersebut. Misal, balok, tabung, kubus, dan kerucut.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string nama_bidang;
    float sisi;
    float jariJari;
    float panjang;
    float lebar;
    float volume;
    float tinggi;
    float tinggiTabung;
    float luas_permukaan;

    cout << "Masukkan jenis bidang: " << endl;
    cin >> nama_bidang;

 if (nama_bidang == "kubus"){
        cout <<"Panjang sisi: (cm)" << endl;
        cin >> sisi;

        volume = sisi*sisi*sisi;
        luas_permukaan = 6*(sisi*sisi);

        cout << "Jadi volume kubus tsb adalah: " << volume << endl;
        cout << "Dan juga luas permukaannya adalah: " << luas_permukaan << endl;
    }
    else if (nama_bidang == "balok"){
        cout << "Masukkan panjang balok: " << endl;
        cin >> panjang;
        cout << "Masukkan lebar balok: " << endl;
        cin >> lebar;
        cout << "Masukkan tinggi balok: " << endl;
        cin >> tinggi;
    
        volume = panjang * lebar * tinggi;
        luas_permukaan = 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);
            
        cout << "Jadi volume balok tsb adalah: " << volume << endl;
        cout << "Dan juga luas permukaannya adalah: " << luas_permukaan << endl;
    }
    else if (nama_bidang == "tabung"){
        cout <<"Jari-jari alas: " << endl;
        cin >> jariJari;
        cout << "tinggi tabung: " << endl;
        cin >> tinggiTabung;

        volume = 3.14 * jariJari * jariJari  * tinggiTabung;
        luas_permukaan = 2 * 3.14 * jariJari * (jariJari + tinggiTabung);

        cout << "Jadi volume tabung tsb adalah: " << volume << endl;
        cout << "Dan juga luas permukaannya adalah: " << luas_permukaan << endl;
    }
    else{
        cout << "Bidang tidak valid" << endl;
    }
    return 0;

}