#include <iostream>

using namespace std;

int main() {
    int berat, tinggi;

    cout << "Masukkan berat badan : "; 
    cin >> berat;
    cout << "Masukkan berat tinggi : "; 
    cin >> tinggi;

    float bmi = berat / (tinggi * tinggi);

    if(bmi < 18.5) {
        cout << "Berat badan kurang";
    } else if(bmi >= 18.5 && bmi < 25 ) {
        cout << "Berat badan anda normal";
    } else if(bmi <= 25 && bmi < 30) {
        cout << "Berat badan berlebih";
    } else if(bmi >= 30) {
        cout << "Obesitas";
    }
}