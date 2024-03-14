#include <iostream>

using namespace std;

int main () {
    float alas, tinggi, tinggiPrisma, volume, luasPermukaan, luasSelimut;

    cout << "Masukkan alas : "; cin >> alas;
    cout << "Masukkan tinggi : "; cin >> tinggi;
    cout << "Masukkan tinggi prisma : "; cin >> tinggiPrisma;
    cout << "Masukkan luas selimut : "; cin >> luasSelimut;

    volume = ((alas * tinggi) / 2) * tinggiPrisma;
    cout << "Volume = " << volume << endl;

    luasPermukaan = (2 * alas) + luasSelimut;
    cout << "Luas permukaan = " << luasPermukaan << endl;
}