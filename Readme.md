Program Kasir Buku dibuat oleh :

1. Hamid Sabirin (2311102129)
2. Danendra Arden Shaduq (2311102146)

<h1 align="center">PROGRAM KASIR TOKO BUKU</h1>

## Latar Belakang

Persaingan dalam penjualan buku saat ini semakin ketat. Selain kualitas koleksi buku, pengalaman layanan juga merupakan faktor penting dalam reputasi toko. Beberapa toko buku menerapkan sistem informasi untuk mengatasi permasalahan umum dalam proses bisnisnya, seperti mendata stok buku yang tersedia, transaksi pembayaran, pengelolaan stok buku. Banyak proses yang dijelaskan di atas masih dilakukan secara manual oleh penjual buku. Tentu saja, untuk toko buku menengah hingga besar, hal ini sangat tidak efisien karena membutuhkan banyak waktu dan tenaga. Selain itu, kurangnya proses bisnis yang jelas dan komitmen yang kuat terhadap penerapannya dapat meningkatkan risiko kesalahan individu atau “kesalahan manusia”. Pemilihan teknologi untuk sistem harus disesuaikan dengan kebutuhan dan proses bisnis toko buku. Hal ini berdampak langsung pada efisiensi layanan dan pengelolaan toko buku.

## Penjelasan

Program ini adalah aplikasi kasir untuk sebuah toko buku. Program ini memungkinkan pengguna untuk memilih buku dari daftar, mengedit informasi buku, melakukan pembayaran untuk buku yang dipilih, serta menampilkan daftar buku yang tersedia dan terbaru. Program ini dibuat menggunakan bahasa pemrograman C++ dan memanfaatkan konsep stack, searching, array, dan struct.

## Fitur

    1. Pilih Buku dari List: Pengguna dapat memilih buku dari daftar buku yang tersedia.
    2. Edit Buku: Pengguna dapat mengedit informasi buku yang ada.
    3. Bayar Buku yang Dipilih: Pengguna dapat membayar buku yang telah dipilih.
    4. Tampilkan Buku: Pengguna dapat menampilkan daftar buku yang tersedia.
    5. Cari Buku berdasarkan ID: Pengguna dapat mencari buku berdasarkan ID.
    6. Tambah Buku Baru: Pengguna dapat menambahkan buku baru ke dalam daftar.
    7. Keluar: Mengakhiri program.

## Flowchart

![Flowchart URL](https://github.com/Hamid165/Tugas-Besar/blob/514c72fcd033e55a484340ed13592ba763f68f39/assets/flowchart.png)

## Fungsi Utama

    1. tampilkanMenu() : Menampilkan menu utama program.
    2. tampilkanInfoBuku(const Buku &buku) : Menampilkan informasi detail dari sebuah buku.
    3. tampilkanDaftarBuku(const vector<Buku> &daftarBuku) : Menampilkan daftar buku yang tersedia.
    4. pilihBuku(vector<Buku> &daftarBuku, stack<Buku> &bukuDipilih) : Memilih buku dari daftar dan menambahkannya ke stack buku yang dipilih.
    5. editBuku(vector<Buku> &daftarBuku) : Mengedit informasi buku yang ada dalam daftar.
    6. bayarBuku(stack<Buku> &bukuDipilih) : Memproses pembayaran buku yang dipilih oleh pengguna.
    7. cariBukuByID(const vector<Buku> &daftarBuku) : Mencari buku berdasarkan ID.
    8. tambahBuku(vector<Buku> &daftarBuku) : Menambahkan buku baru ke dalam daftar.

## Cara Menggunakan

   1. Jalankan program.
   2. Pilih menu yang diinginkan dengan memasukkan angka yang sesuai pada menu.
   3. Menambahkan buku (jika ada buku baru)
   4. Pilih buku dalam pembelian / bayar.
   5. Mencari buku jika ingin mencari sebuah buku
   6. Bayar buku dengan nominal pas / lebih.
   7. Untuk keluar, pilih opsi "Keluar" pada menu utama.
