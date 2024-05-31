#include <iostream>
#include <vector>

using namespace std;

// Definisi kelas Mahasiswa
class Mahasiswa {
    // Access Modifier private: atribut tidak bisa diakses langsung dari luar kelas
    private:
        string nama, nim;
        float nilai;

    // Access Modifier public: metode dapat diakses dari luar kelas
    public:
        // Konstruktor untuk menginisialisasi atribut
        Mahasiswa(string nama, string nim, float nilai) {
            this->nama = nama;
            this->nim = nim;
            this->nilai = nilai;
        }

        // Metode getter untuk mengakses atribut private
        string getNama() {
            return this->nama;
        }

        string getNim() {
            return this->nim;
        }

        float getNilai() {
            return this->nilai;
        }

        // Metode untuk menampilkan informasi mahasiswa
        void display() {
            cout << "Nama  : " << this->getNama() << endl;
            cout << "NIM   : " << this->getNim() << endl;
            cout << "Nilai : " << this->getNilai() << endl;
        }
};

int main() {
    system("cls"); // Membersihkan layar konsol (hanya untuk Windows)

    vector<Mahasiswa> mahasiswa; // Vektor untuk menyimpan objek Mahasiswa
    int n; // Variabel untuk menyimpan jumlah mahasiswa
    string nama, nim; // Variabel untuk menyimpan nama dan NIM sementara
    float nilai; // Variabel untuk menyimpan nilai sementara

    // Meminta input jumlah mahasiswa
    cout << "Masukkan jumlah mahasiswa : ";
    cin >> n;

    // Loop untuk menginput data setiap mahasiswa
    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;

        cin.get(); // Menghapus karakter newline dari input sebelumnya

        // Input nama mahasiswa
        cout << "Masukkan nama : ";
        getline(cin, nama);

        // Input NIM mahasiswa
        cout << "Masukkan NIM : ";
        cin >> nim;

        // Input nilai mahasiswa
        cout << "Masukkan nilai : ";
        cin >> nilai;

        // Membuat objek Mahasiswa dan menambahkannya ke dalam vektor
        Mahasiswa mhs(nama, nim, nilai);
        mahasiswa.push_back(mhs);
    }

    // Loop untuk menampilkan data setiap mahasiswa
    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;
        mahasiswa[i].display(); // Memanggil metode display untuk menampilkan informasi mahasiswa
    }
}
