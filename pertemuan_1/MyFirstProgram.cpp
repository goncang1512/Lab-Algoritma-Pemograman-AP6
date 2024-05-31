#include <iostream>
#include <iomanip>

using namespace std;

// Program untuk input dan menampilkan data mahasiswa
int main() {
    string nama;
    int nim;
    char kom;
    float ip;

    system("CLS");

    cout << "Hello World" << endl;

    // Untuk input nama yang lebih dari satu kata
    cout << "Masukkan Nama : ";
    getline(cin, nama);

    // Untuk input NIM Mahasiswa
    cout << "Masukkan NIM : ";
    cin >> nim;

    // Untuk input KOM Mahasiswa
    cout << "Masukkan KOM : ";
    cin >> kom;

    // Untuk input IP Mahasiswa
    cout << "Masukkan IP : ";
    cin >> ip;

    // untuk bersihkan terminal
    system("cls");

    // Menampilkan nama, nim, kom yang di input
    cout << "Nama : " << nama << endl;
    cout << "NIM : " << nim << endl;
    cout << "KOM : " << kom << endl;

    // Mengambil dua angka di belakang koma dan menampilkan IP
    cout << fixed << setprecision(2);
    cout << "IP : " << ip << endl;

    return 0;
}