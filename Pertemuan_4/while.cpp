#include <iostream>

using namespace std;

int main() {
    int angka = 1;
    // Melalukan looping menggunakan while di mana angka akan di cek terlebih dahulu dan di tampilkan setelah di tampilkan maka angka di tambah 1
    while (angka <= 10) {
        cout << angka << " ";
        angka++;
    }

    int angka = 1;
    // Melakukan looping untuk menampilkan angka bilangan genap menggunakan while
    while (angka <= 20) {
        if (angka % 2 == 0) {
            cout << angka << " ";
        }
        angka++;
    }

}