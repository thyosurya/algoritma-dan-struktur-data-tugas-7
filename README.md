---

### Biodata

- **Nama** : Moh. Radithyo Surya Martuah
- **NIM** : 531424113
- **Prodi** : Sistem Informasi
- **Dosen Pengampu** : Alfian Zakaria, S.T., M.T., MCE

---

# Binary Search Mahasiswa

Program ini melakukan pencarian mahasiswa berdasarkan nama menggunakan metode pencarian biner dalam bahasa C++. Program meminta nama mahasiswa yang ingin dicari, dan jika ditemukan, program akan mengembalikan indeks tempat nama tersebut ditemukan.

## Struktur Data

Program menggunakan struktur `Mahasiswa` dengan atribut-atribut berikut:
- **NIM** : Nomor Induk Mahasiswa (integer)
- **Nama** : Nama Mahasiswa (string)
- **Alamat** : Alamat Mahasiswa (string)
- **Kelas** : Kelas Mahasiswa (string)
- **Nilai** : Nilai Mahasiswa (float)

## Fungsi `cariBagidua`

Fungsi `cariBagidua` melakukan pencarian dengan algoritma binary search. Fungsi ini memiliki parameter:
- `mhs[]` : Array dari objek `Mahasiswa`
- `jumlah` : Jumlah elemen dalam array
- `namaDicari` : Nama mahasiswa yang dicari

### Cara Kerja Fungsi
1. Memulai pencarian dari tengah array.
2. Jika nama ditemukan, fungsi mengembalikan indeks mahasiswa.
3. Jika nama di tengah lebih kecil dari `namaDicari`, pencarian dilanjutkan ke bagian kanan.
4. Jika nama di tengah lebih besar, pencarian dilanjutkan ke bagian kiri.
5. Jika nama tidak ditemukan setelah seluruh array diperiksa, fungsi mengembalikan `-1`.

## Contoh Penggunaan

```cpp
Mahasiswa mhs[5] = {
    {123, "Andi", "Jakarta", "TI-A", 85.5},
    {124, "Budi", "Bandung", "TI-B", 78.0},
    {125, "Cici", "Surabaya", "TI-A", 92.0},
    {126, "Dedi", "Malang", "TI-B", 80.0},
    {127, "Evi", "Medan", "TI-A", 88.5}
};
```

### Input
Pengguna memasukkan nama mahasiswa yang ingin dicari.

### Output
- Jika ditemukan, program akan mengembalikan indeks posisi mahasiswa.
- Jika tidak ditemukan, program menampilkan pesan "Nama tidak ditemukan".

## Contoh Output

```
Masukkan nama mahasiswa yang dicari: Cici
Nama ditemukan di indeks ke-2

Masukkan nama mahasiswa yang dicari: Fajar
Nama tidak ditemukan
```

## Cara Menjalankan Program

1. Salin kode ke dalam editor C++.
2. Jalankan program.
3. Masukkan nama mahasiswa yang ingin dicari, dan hasil pencarian akan ditampilkan di layar.
