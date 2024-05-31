#include <iostream>

using namespace std;

int main() {
    int angka;
    string tipe;

    // Input angka
    cout << "Masukkan angka: ";
    cin >> angka;

    // angka akan di seleksi menggunakan terniary operator jika angka habis di bagi 2 maka angka merupakan bilangan genap jika tidak maka angka merupakan bilangan ganjil
    tipe = (angka % 2 == 0) ? "Genap" : "Ganjil";
    // Untuk menampilkan hasil dari check tipe angkanya 
    cout << tipe << endl;

    return 0;
}