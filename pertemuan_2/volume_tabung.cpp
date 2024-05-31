#include <iostream>

using namespace std;

int main() {
    // Konstanta untuk phi 
    const float PHI = 3.14;

    // Variable volume tabung
    float r, t, v;

    // Input jari jari tabung
    cout << "Masukkan jari-jari : ";
    cin >> r;

    // Input tinggi tabung
    cout << "Masukkan tinggi : ";
    cin >> t;

    // Hitung volume tabung nya 
    v = PHI * r * r * t;

    // Tampilkan hasil setelah menjumlahkan PHI * r * r * t;
    cout << "Volume = " << v << endl;
    return 0;
}