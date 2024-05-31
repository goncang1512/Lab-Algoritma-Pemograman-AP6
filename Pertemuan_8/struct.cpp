#include <iostream>
#include <vector>

using namespace std;

// Struktur Mahasiswa
struct Mahasiswa {
    string nama; // Nama mahasiswa
    string nim;  // Nomor Induk Mahasiswa (NIM)
    float nilai; // Nilai mahasiswa
};

// Tipe Data Siswa (struct yang berbeda)
typedef struct {
    string nama; // Nama siswa
    string nim;  // Nomor Induk Mahasiswa (NIM)
} Siswa;

int main() {
    system("cls"); // Membersihkan layar konsol (hanya untuk Windows)

    Mahasiswa mhs; // Deklarasi variabel mhs bertipe Mahasiswa
    vector<Mahasiswa> mahasiswa; // Deklarasi vektor untuk menyimpan data mahasiswa
    int n; // Deklarasi variabel n untuk jumlah mahasiswa

    // Meminta input jumlah mahasiswa
    cout << "Masukkan jumlah mahasiswa : ";
    cin >> n;

    // Loop untuk menginput data setiap mahasiswa
    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;
        cin.get(); // Menghapus karakter newline dari input sebelumnya

        // Input nama mahasiswa
        cout << "Masukkan nama : ";
        getline(cin, mhs.nama);

        // Input NIM mahasiswa
        cout << "Masukkan NIM : ";
        cin >> mhs.nim;

        // Input nilai mahasiswa
        cout << "Masukkan nilai : ";
        cin >> mhs.nilai;

        // Menambahkan data mahasiswa ke dalam vektor
        mahasiswa.push_back(mhs);
    }

    // Loop untuk menampilkan data setiap mahasiswa
    for (int i = 0; i < n; i++) {
        cout << mahasiswa[i].nama << " memiliki NIM " << mahasiswa[i].nim << " dan nilai " << mahasiswa[i].nilai << endl;
    }
}
