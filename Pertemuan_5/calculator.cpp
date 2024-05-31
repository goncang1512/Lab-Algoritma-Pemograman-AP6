#include <iostream>
// Header untuk ambil function operasi angka
#include "calc.h"

using namespace std;

// void function untuk menampilkan gari gari 
void garis() {
    cout << "====================================" << endl;
}

// function untuk menampilkan bintang
void bintang() {
    cout << "************************************" << endl;
}

// Function untuk menampilkan menu dari kalkulator
void menu() {
    garis();
    cout << "Selamat Datang di Program Kalkulator" << endl;
    garis();
    cout << "1. Tambah\n2. Kurang\n3. Kali\n4. Bagi\n5. Modulo\n6. Pangkat" << endl;
    garis();
}

int main() {
    char cont;

    // akan melakukan perulangna do while
    do {
        system("cls");

        int operasi, a, b;
        float hasil;

        menu();
        // Input operasi dan angka yang ingin di operasi kan a dan b
        cout << "Masukkan operasi : ";
        cin >> operasi;

        cout << "Masukkan angka pertama : ";
        cin >> a;

        cout << "Masukkan angka kedua : ";
        cin >> b;

        // Melakukan swithc case sesuai dengan operasi yang input
        switch(operasi) {
            case 1:
                hasil = tambah(a, b);
                break;
            case 2:
                hasil = kurang(a, b);
                break;
            case 3:
                hasil = kali(a, b);
                break;
            case 4:
                hasil = bagi(a, b);
                break;
            case 5:
                hasil = modulo(a, b);
                break;
            case 6:
                hasil = pangkat(a, b);
                break;
        }

        // Menampilkan hasil dari operasi 
        cout << "Hasil = " << hasil << endl;

        // Input variabel cont jika Y maka akan mengulang code nya selain dari itu maka code nya akan berhenti lanjut
        cout << "Apakah Anda ingin melanjutkan? [Y/N] : ";
        cin >> cont;
    } while(toupper(cont) == 'Y');

    // karena cont nya selain dari "y" maka akan menampilkan bintang dan cout Terimakasih
    bintang();
    cout << "Terima Kasih Telah Menggunakan Program Kalkulator" << endl;

    return 0;
}