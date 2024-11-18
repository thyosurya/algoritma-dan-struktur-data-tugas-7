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

int cariBeruntun(Mahasiswa mhs[], int jumlah, string namaDicari) {
    for (int i = 0; i < jumlah; i++) {
        if (mhs[i].Nama == namaDicari) {
            return i;
        }
    }
    return -1;
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
    getline(cin, namaDicari);  // Menggunakan getline agar bisa membaca nama dengan spasi

    int posisi = cariBeruntun(mhs, 5, namaDicari);
    if (posisi != -1) {
        cout << "Nama ditemukan!" << endl;
        cout << "NIM   : " << mhs[posisi].NIM << endl;
        cout << "Nama  : " << mhs[posisi].Nama << endl;
        cout << "Alamat: " << mhs[posisi].Alamat << endl;
        cout << "Kelas : " << mhs[posisi].Kelas << endl;
        cout << "Nilai : " << mhs[posisi].Nilai << endl;
    } else {
        cout << "Nama tidak ditemukan." << endl;
    }

    return 0;
}
