#include <iostream>

using namespace std;

int main() {
    // Mencetak "Hello World" sebanyak 10 kali
    for(int i = 1; i <= 10; i++) {
        cout << "Hello World" << endl;
    }

    // Mencetak angka genap
    for(int i = 1; i <= 20; i++) {
        if(i % 2 == 0) {
            cout << i << " ";
        }
    }

    cout << endl;
    // Menampilkan Bintang dalam bentuk persegi dengan kolom 4 bintang dan 4 baris bintang
    for(int baris = 1; baris <= 4; baris++) {
        for(int kolom = 1; kolom <= 4; kolom++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Menampilkan bintang dalam bentuk segi tiga siku siku
    for(int i = 1; i <= 4; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // inisialisasi num dan sum dengan angka 0
    int n, num = 0, sum = 0;

    // Input su
    cout << "Masukkan suku ke : ";
    cin >> n;

    // Menampilkan deret 5 5 10 10 15...n
    for(int i = 1; i <= n; i++) {
        // jika i nya bilangan genap maka num = num
        if(i % 2 == 0) {
            num = num;
        // Jika i nya bilangan ganjil maka num + 5
        } else {
            num += 5;
        }
        // setelah itu sum + num
        sum += num;

        // akan menampilkan variable num yang sudah di seleksi
        cout << num << " ";
    }
    cout << endl;
    
    // Menampilkan suku yang kita input dan num yang kita inginkan 
    cout << "Suku ke " << n << " adalah " << num << endl;
    // Menampilkan suku yang kita input dan menampilkan jumlah dari suku nya
    cout << "Jumlah hingga suku ke " << n << " adalah " << sum << endl;
}