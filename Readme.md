Program Kasir Buku dibuat oleh :

1. Hamid Sabirin (2311102129)
2. Danendra Arden Shaduq (2311102146)

# Program Kasir Toko Buku

Program ini adalah aplikasi kasir untuk sebuah toko buku. Program ini memungkinkan pengguna untuk memilih buku dari daftar, mengedit informasi buku, melakukan pembayaran untuk buku yang dipilih, serta menampilkan daftar buku yang tersedia dan terbaru. Program ini dibuat menggunakan bahasa pemrograman C++ dan memanfaatkan konsep stack, searching, array, perulangan, dan percabangan.

## Fitur

1. Pilih Buku dari List: Pengguna dapat memilih buku dari daftar buku yang tersedia.
2. Edit Buku: Pengguna dapat mengedit informasi buku yang ada.
3. Bayar Buku yang Dipilih: Pengguna dapat membayar buku yang telah dipilih.
4. Tampilkan Buku: Pengguna dapat menampilkan daftar buku yang tersedia.
5. Keluar: Mengakhiri program.

## Flowchart

![Flowchart URL](https://github.com/Hamid165/Tugas-Besar/blob/07b5e963f7d4d93376db00a4ebe4fdb8ed107003/assets/Flowchart.jpg)

## Fungsi Utama

1. tampilkanMenu() : Menampilkan menu utama program.
2. tampilkanInfoBuku(const Buku &buku) : Menampilkan informasi detail dari sebuah buku.
3. tampilkanDaftarBuku(const vector<Buku> &daftarBuku) : Menampilkan daftar buku yang tersedia.
4. pilihBuku(vector<Buku> &daftarBuku, stack<Buku> &bukuDipilih) : Memilih buku dari daftar dan menambahkannya ke stack buku yang dipilih.
5. editBuku(vector<Buku> &daftarBuku) : Mengedit informasi buku yang ada dalam daftar.
6. bayarBuku(stack<Buku> &bukuDipilih) : Memproses pembayaran buku yang dipilih oleh pengguna.

## Cara Menggunakan

1. Jalankan program.
2. Pilih menu yang diinginkan dengan memasukkan angka yang sesuai.
3. Tambah buku dalam pembelian / bayar
4. Bayar buku dengan nominal pas / lebih
5. Untuk keluar, pilih opsi "Keluar" pada menu utama.
