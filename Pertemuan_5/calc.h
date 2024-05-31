// Untuk menggunakan function math yang sudah di sediakan cpp
#include <math.h>

// Function untuk menjumlahkan angka a dan b dan return hasilnya
int tambah(int a, int b) {
    return a + b;
}

// Function untuk mengurangkan angka a dan b dan return hasilnya
int kurang(int a, int b) {
    return a - b;
}

// Function untuk mengalikan angka a dan b dan return hasilnya
int kali(int a, int b) {
    return a * b;
}

// Function untuk membagikan angka a dan b dan return hasilnya
float bagi(int a, int b) {
    return static_cast<float>(a) / static_cast<float>(b);
}

// Function untuk modulo angka a dan b dan return hasilnya
int modulo(int a, int b) {
    return a % b;
}

// Function untuk pangkat angka a dan b pangkat nya return hasilnya
int pangkat(int a, int b) {
    return pow(a, b);
}