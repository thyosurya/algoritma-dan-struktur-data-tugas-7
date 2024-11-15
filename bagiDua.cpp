//
// Created by HP on 15/11/2024.
//
#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    int NIM;
    string Nama;
    string Alamat;
    string Kelas;
    float Nilai;
};

int cariBagidua(Mahasiswa mhs[], int jumlah, string namaDicari) {
    int kiri = 0;
    int kanan = jumlah - 1;
    while (kiri <= kanan) {
        int tengah = (kiri + kanan) / 2;
        if (mhs[tengah].Nama == namaDicari) {
            return tengah; // mengembalikan indeks tempat nama ditemukan
        } else if (mhs[tengah].Nama < namaDicari) {
            kiri = tengah + 1;
        } else {
            kanan = tengah - 1;
        }
    }
    return -1; // nama tidak ditemukan
}

int main() {
    Mahasiswa mhs[5] = {
        {123, "Andi", "Jakarta", "TI-A", 85.5},
        {124, "Budi", "Bandung", "TI-B", 78.0},
        {125, "Cici", "Surabaya", "TI-A", 92.0},
        {126, "Dedi", "Malang", "TI-B", 80.0},
        {127, "Evi", "Medan", "TI-A", 88.5}
    };
    string namaDicari;
    cout << "Masukkan nama mahasiswa yang dicari: ";
    cin >> namaDicari;

    int posisi = cariBagidua(mhs, 5, namaDicari);
    if (posisi != -1) {
        cout << "Nama ditemukan di indeks ke-" << posisi << endl;
    } else {
        cout << "Nama tidak ditemukan" << endl;
    }

    return 0;
}
