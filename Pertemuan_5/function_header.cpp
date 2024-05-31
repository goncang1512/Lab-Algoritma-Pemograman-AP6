#include <iostream>
#include "operasi.h"
#include "preprocessor.h"

uns;

// Funtion yang menerima parameter name dan menampilkan "Hello (nama yang di input)"
void sayHello(string name) {
    o << "Hello " << name << n;
}

// Untuk menampilkan gari 
void garis() {
    o << "================" << n;
}

// Untuk menampilkan bintang satu baris
void bintang() {
    o << "***************" << n;
}

int main() {
    system("cls");
    // Pemanggilan funciton sayHello
    sayHello("AP6");
    garis();
    bintang();

    // Menampilkan hasil dari function tambah, kurang, kali, dan bagi
    o << tambah(2, 3) << n;
    o << kurang(2, 3) << n;
    o << kali(2, 3) << n;
    o << bagi(2, 3) << n;
    o << PI << n;
    return 0;
}