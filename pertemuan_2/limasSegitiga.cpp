#include <iostream>

using namespace std;

int main () {
    float luasAlas, tinggi, volume, luasPermukaan, sisiTegak;

    cout << "Masukkan luas alas : ";
    cin >> luasAlas;

    cout << "Masukkan tinggi limas : ";
    cin >> tinggi;

    cout << "Masukkan luas sisi tegak : ";
    cin >> sisiTegak;

    luasPermukaan = (0.5 * luasAlas * tinggi) + (3 * sisiTegak);
    volume = (1.0/3) * (luasAlas * tinggi);

    cout << "Volume = " << volume << endl;
    cout << "Luas permukaan = " << luasPermukaan << endl;
}