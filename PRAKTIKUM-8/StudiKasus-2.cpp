#include <iostream>

using namespace std;

int main() {
    int barisA, kolomA, barisB, kolomB;

    cout << "Masukkan dimensi Matriks A (baris kolom): ";
    cin >> barisA >> kolomA;
    cout << "Masukkan dimensi Matriks B (baris kolom): ";
    cin >> barisB >> kolomB;

    if (kolomA != barisB) {
        cout << "Error: Kolom Matriks A harus sama dengan baris Matriks B.\n";
        return 0;
    }

    int** matriksA = new int*[barisA];
    for (int i = 0; i < barisA; i++) matriksA[i] = new int[kolomA];

    int** matriksB = new int*[barisB];
    for (int i = 0; i < barisB; i++) matriksB[i] = new int[kolomB];

    int** matriksC = new int*[barisA];
    for (int i = 0; i < barisA; i++) matriksC[i] = new int[kolomB];

    cout << "\nInput elemen Matriks A:\n";
    for (int i = 0; i < barisA; i++) {
        for (int j = 0; j < kolomA; j++) {
            cin >> matriksA[i][j];
        }
    }

    cout << "Input elemen Matriks B:\n";
    for (int i = 0; i < barisB; i++) {
        for (int j = 0; j < kolomB; j++) {
            cin >> matriksB[i][j];
        }
    }

    for (int i = 0; i < barisA; i++) {
        for (int j = 0; j < kolomB; j++) {
            matriksC[i][j] = 0;
            for (int k = 0; k < kolomA; k++) {
                matriksC[i][j] += matriksA[i][k] * matriksB[k][j];
            }
        }
    }

    cout << "\nHasil perkalian Matriks A dan B:\n";
    for (int i = 0; i < barisA; i++) {
        for (int j = 0; j < kolomB; j++) {
            cout << *(*(matriksC + i) + j) << " ";
        }
        cout << "\n";
    }

    for (int i = 0; i < barisA; i++) { 
        delete[] matriksA[i]; 
        delete[] matriksC[i]; 
    }
    for (int i = 0; i < barisB; i++) { 
        delete[] matriksB[i]; 
    }
    delete[] matriksA; 
    delete[] matriksB; 
    delete[] matriksC;

    return 0;
}