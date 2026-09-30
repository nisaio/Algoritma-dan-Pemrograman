//Studi Kasus 1:Kalkulator Diskon Belanja

#include <iostream> 
#include <cmath> 
#include <iomanip> 

using namespace std;
int main() {
    double JumlahBarang;
    double hargaitem;
    double Total;
    double Diskon;
    char pilihan;

    cout << "====== KASIR PEMBAYARAN MANDIRI ======" << endl;

    do{
    Total = 0;
    cout << "Masukkan jumlah barang : ";
    cin >> JumlahBarang;
    
    for (int i=1; i <= JumlahBarang; i++){
        cout <<  "Masukkan harga barang ke-" << i << ": Rp";
        cin >> hargaitem;
        Total += hargaitem;
    }
    cout << "======================================" << endl;
    
    if (Total > 500000){ 
        Diskon = 0.10 * Total;
    }
    else if (Total >= 250000){
        Diskon = 0.05 * Total;
    }
    else{
        Diskon = 0; 
    }

    double HargaAkhir =  Total - Diskon;

    cout << "Harga Total            : Rp" << fixed << setprecision(2) << Total << endl;
    cout << "Potongan Harga         : Rp" << Diskon << endl;
    cout << "Harga Setelah Potongan : Rp" << HargaAkhir << endl;
    cout << "======================================" << endl;

    cout << "Apakah anda ingin melanjutkan transaksi? : (y/Y/n/N)" << endl;
    cin >> pilihan;

    } while (pilihan == 'y' || pilihan == 'Y' );
    cout << "Terima kasih sudah berbelanja!" << endl;
    
    return 0;
}   