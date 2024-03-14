#include <iostream>

using namespace std;

int main () {
    const float phi = 3.14;

    float jari, tinggi, volume;

    cout << "Masukkan jari-jari : ";
    cin >> jari;

    cout << "Masukkan tinggi : ";
    cin >> tinggi;

    volume = phi * jari * jari * tinggi;

    cout << "Volume = " << volume;
}