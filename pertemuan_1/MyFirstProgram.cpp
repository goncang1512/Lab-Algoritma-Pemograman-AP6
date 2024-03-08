#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    string nama; 
    int nim;
    char kom;
    float ip;

    system("cls");
    cout << "Hello world" << endl;

    cout << "Masukkan nama : ";
    // cin >> nama;
    getline(cin, nama);

    cout << "Masukkan NIM : ";
    cin >> nim;

    cout << "Masukkan KOM : ";
    cin >> kom;

    cout << "Masukkan IP : ";
    cin >> ip;

    cout << "Nama : " << nama << endl;
    cout << "NIM : " << nim << endl;
    cout << "KOM : " << kom << endl;
    cout << fixed << setprecision(2);
    cout << "IP : " << ip  << endl;

    return 0;
}