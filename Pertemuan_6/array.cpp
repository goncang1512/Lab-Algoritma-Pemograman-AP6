#include <iostream>
#include <array>

using namespace std;

int main() {
    system("cls"); // Membersihkan layar konsol (hanya untuk Windows)

    // Deklarasi dan Inisialisasi Array
    string nama[5] = {"Andi", "Budi", "Santi", "Wanto", "Denis"};

    // Mengakses Elemen dalam Array
    cout << nama[0] << endl;
    cout << nama[1] << endl;
    cout << nama[2] << endl;
    cout << nama[3] << endl;
    cout << nama[4] << endl;

    // Mengakses Elemen dalam Array menggunakan Loop
    for(int i = 0; i < 5; i++) {
        cout << nama[i] << endl;
    }

    // Array Multidimensi
    int matrix[2][2] = {{1, 3}, {2, 4}};

    // Menampilkan Array Multidimensi
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // String sebagai Array Karakter
    string nama = "Jonrio";
    
    // Menampilkan 3 Karakter Pertama dari String
    for(int i = 0; i < 3; i++) {
        cout << nama[i] << " ";
    }

    // Menampilkan Semua Karakter dalam String
    for(int i = 0; i < nama.length(); i++) {
        cout << nama[i] << endl;
    }

    // Contoh 1: Input Nilai Mahasiswa
    int n;

    cout << "Masukkan banyak mahasiswa : ";
    cin >> n;

    float nilai[n];
    for(int i = 0; i < n; i++) {
        cout << "Masukkan nilai mahasiswa ke " << i + 1 << " : ";
        cin >> nilai[i];
    }

    for(int i = 0; i < n; i++) {
        cout << "Nilai mahasiswa ke " << i + 1 << " adalah " << nilai[i] << endl;
    }

    // Contoh 2: Menampilkan Nama Karyawan
    string nama_karyawan[] = {"Andi", "Yusuf", "Budi", "Yanto", "Santi", "Dodi"};

    // Menggunakan sizeof untuk menghitung jumlah elemen dalam array
    for(int i = 0; i < sizeof(nama_karyawan) / sizeof(string); i++) {
        cout << nama_karyawan[i] << endl;
    }

    // Contoh 3: Penjumlahan Matriks
    int matriks1[2][2];
    int matriks2[2][2];
    int hasil[2][2];

    // Input Matriks 1
    cout << "Matriks 1" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << "Masukkan elemen baris " << i + 1 << " kolom " << j + 1 << " : ";
            cin >> matriks1[i][j];
        }
    }

    // Input Matriks 2
    cout << "Matriks 2" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << "Masukkan elemen baris " << i + 1 << " kolom " << j + 1 << " : ";
            cin >> matriks2[i][j];
        }
    }

    // Penjumlahan Matriks 1 dan Matriks 2
    cout << "Hasil Penjumlahan" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }

    // Menggunakan Library Array
    array<string, 5> nama = {"Andi", "Budi", "Santi", "Wanto", "Denis"};

    // Menampilkan Elemen dalam Library Array
    for(string mhs : nama) {
        cout << mhs << endl;
    }
}
