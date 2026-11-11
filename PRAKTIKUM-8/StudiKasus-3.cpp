#include <iostream>

using namespace std;

void tampilMatriks(int** matriks, int baris, int kolom, int barisKe = 0) {
    if (barisKe >= baris) return;

    for (int j = 0; j < kolom; j++) {
        cout << matriks[barisKe][j] << " ";
    }
    cout << "\n";

    tampilMatriks(matriks, baris, kolom, barisKe + 1);
}

int main() {
    int baris, kolom;
    cout << "Masukkan dimensi matriks (baris kolom): ";
    cin >> baris >> kolom;

    int** matriksAsli = new int*[baris];
    for (int i = 0; i < baris; i++) matriksAsli[i] = new int[kolom];

    int** matriksTranspose = new int*[kolom];
    for (int i = 0; i < kolom; i++) matriksTranspose[i] = new int[baris];

    cout << "Input elemen Matriks:\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cin >> matriksAsli[i][j];
            matriksTranspose[j][i] = matriksAsli[i][j];
        }
    }

    cout << "\nMatriks asli:\n";
    tampilMatriks(matriksAsli, baris, kolom);

    cout << "\nMatriks transpose:\n";
    tampilMatriks(matriksTranspose, kolom, baris);

    for (int i = 0; i < baris; i++) delete[] matriksAsli[i];
    for (int i = 0; i < kolom; i++) delete[] matriksTranspose[i];
    delete[] matriksAsli;
    delete[] matriksTranspose;

    return 0;
}