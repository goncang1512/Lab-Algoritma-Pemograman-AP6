#include <iostream>

using namespace std;

int main() {
    // a: merupkan label yang di berikan
    a: 
        cout << "Hello World" << endl;
        // goto merupakan untuk mengarahakan akan pindah ke code yang mana
        goto d;
    b:
        cout << "Universitas Sumatera Utara" << endl;
        return 0;
    c:
        cout << "Fasilkom-TI" << endl;
        goto b;
    d:
        cout << "Ilmu Komputer" << endl;
        goto c;

    int angka = 1;
    // Akan melakukan perulangan menggunkan goto pertama menampilkan angka kemudian angka + 1 dan di cek angka <= 10 jika tidak maka pindah lagi ke label loop begitu secara terus menerus sampai angka <= 10
    loop:
        cout << angka << " ";
        angka++;
    if(angka <= 10) {
        goto loop;
    }
}