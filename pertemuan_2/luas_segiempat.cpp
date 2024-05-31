#include <iostream>

using namespace std;

int main() {
    // variable untuk mencari luas segi empat
    float panjang, lebar, luas;

    // Untuk input panjang segiempat
    cout << "Masukkan panjang : ";
    cin >> panjang;

    // Untuk input lebar segiempat
    cout << "Masukkan lebar : ";
    cin >> lebar;

    // Mengalikan panjang dan lebar dan di simpan ke dalam variable luas
    luas = panjang * lebar;

    // Menampilkan hasil dari panjang X lebar
    cout << "Luas = " << luas << endl;
}