//Studi Kasus 2:Kalkulator Diskon Belanja

#include <iostream>
#include <string> //buat manggil library variabel teks
#include <cmath> //Buat manggil  library rumus matematika
#include <iomanip> //Buat library layout output

using namespace std;
int main() {
    string namaItem;
    double hargaitem;
    double Diskon;
    double HargaDiskon;

    cout << "===== KASIR PEMBAYARAN MANDIRI ====" << endl;

    cout << "Nama Item: " << endl;
    cin >> namaItem;
    cout << "Masukkan Diskon: (%)" << endl;
    cin >> Diskon;

    if (namaItem == "Setrika"){ //== (Apakah sama dengan ini)
        hargaitem = 100000;//= (Nilai tarif per jam diisi sama ini)
    }
    else if (namaItem == "Hanger"){
        hargaitem = 50000;
    }
    else if (namaItem == "Cermin"){
        hargaitem = 35000;
    }
    else if (namaItem == "Tas"){
        hargaitem = 200000;
    }
    else if (namaItem == "Koper"){
        hargaitem = 250000;
    }
    else{
        cout << "Item tidak tersedia"; //misal barang yg dimasukin gada di opsi ntar keluar ini
    }

    double PotonganHarga = (Diskon / 100.0) * hargaitem;
    double HargaAkhir =  hargaitem - PotonganHarga;

    cout << "Besar Potongan Harga: Rp." << PotonganHarga << endl;
    cout << "Harga Setelah Diskon: Rp." << HargaAkhir << endl;

    return 0;
}