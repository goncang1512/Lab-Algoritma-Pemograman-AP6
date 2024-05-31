#include <iostream>

using namespace std;

int main() {
    int angka = 1;
    // melaukan perulangan do while tampilkan terlebih dahulu lalu check angkanya jika <= 10 maka stop
    do {
        cout << angka << " ";
        angka++;
    } while(angka <= 10);

    angka = 1;
    // Tampilkan angka jika angka di atas 10 maka stop code nya
    do {
        cout << angka << " ";
        angka++;
    } while(angka > 10);
}