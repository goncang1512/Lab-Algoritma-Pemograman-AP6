#include <stdio.h>

int main() {
    char nama[50];
    int nim;
    char kom;
    float ip;

    printf("Hello World\n");

    printf("Masukkan Nama: ");
    // scanf("%s", &nama);
    gets(nama);     // gets : get string

    // Untuk input NIM Mahasiswa
    printf("Masukkan NIM : ");
    scanf("%d", &nim);

    // Untuk input KOM Mahasiswa
    printf("Masukkan KOM : ");
    scanf(" %c", &kom);

    // Untuk input IP Mahasiswa
    printf("Masukkan IP : ");
    scanf("%f", &ip);

    //Menampilkan nama menggunakan puts
    printf("Nama : ");
    puts(nama); // puts: put string

    // Menampilkan nim, kom, ip yang di input
    printf("NIM : %d\n", nim);
    printf("KOM : %c\n", kom);
    printf("IP : %.2f\n", ip);
}