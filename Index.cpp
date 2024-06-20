#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <stack>
using namespace std;

// menampung tipe data yang berbeda
struct Buku
{
    int id;
    string judul;
    string jenis;
    double harga;
    int stok;
};
// menu dari toko buku
void TampilkanMenu()
{
    cout << "|===================================================|" << endl;
    cout << "|              Program Kasir Toko Buku              |" << endl;
    cout << "|===================================================|" << endl;
    cout << "|1. Tampilkan buku                                  |" << endl;
    cout << "|2. Pilih Buku dari List                            |" << endl;
    cout << "|3. Edit Buku                                       |" << endl;
    cout << "|4. Bayar Buku yang Dipilih                         |" << endl;
    cout << "|5. Cari Buku berdasarkan ID                        |" << endl;
    cout << "|6. Tambah Buku Baru                                |" << endl;
    cout << "|7. Keluar                                          |" << endl;
    cout << "|===================================================|" << endl;
    cout << "Masukan Pilihan : ";
}
// menampilkan info buku dengan bentuk tabel
void TampilkanInfoBuku(const Buku &buku)
{
    cout << "| " << setw(7) << left << buku.id << "|" << setw(36) << left << buku.judul << " | "
         << setw(13) << left << buku.jenis << "   | " << setw(7) << left << "Rp " << fixed << setprecision(2) << buku.harga << " | " << setw(3) << left << buku.stok << "  |" << endl;
}
// menampilkan daftar buku dalam bentuk tabel
void TampilkanDaftarBuku(const vector<Buku> &daftarBuku)
{
    cout << "|==========================================================================================|" << endl;
    cout << "|                                      Daftar Buku                                         |" << endl;
    cout << "|==========================================================================================|" << endl;
    cout << "| ID     | Nama Buku                           | Jenis           | Harga            | Stok |" << endl;
    cout << "|--------|-------------------------------------|-----------------|------------------|------|" << endl;
    for (const Buku &buku : daftarBuku)
    {
        TampilkanInfoBuku(buku);
    }
    cout << "|==========================================================================================|" << endl;
}
// memilih buku yang akan dibeli
void PilihBuku(vector<Buku> &daftarBuku, stack<Buku> &bukuDipilih)
{
    cout << "|==========================================================================================|" << endl;
    cout << "|                                      Daftar Buku                                         |" << endl;
    cout << "|==========================================================================================|" << endl;
    cout << "| ID     | Nama Buku                           | Jenis           | Harga            | Stok |" << endl;
    cout << "|--------|-------------------------------------|-----------------|------------------|------|" << endl;
    for (const Buku &buku : daftarBuku)
    {
        TampilkanInfoBuku(buku);
    }
    cout << "|==========================================================================================|" << endl;
    cout << "\n";
    int pilihanBuku;
    cout << "Pilih ID buku yang ingin Anda pilih: ";
    cin >> pilihanBuku;

    bool bukuDitemukan = false;
    for (Buku &buku : daftarBuku)
    {
        if (buku.id == pilihanBuku)
        {
            if (buku.stok > 0)
            {
                cout << "|==========================================================================================|" << endl;
                cout << "|                                      Daftar Buku                                         |" << endl;
                cout << "|==========================================================================================|" << endl;
                cout << "| ID     | Nama Buku                           | Jenis           | Harga            | Stok |" << endl;
                cout << "|--------|-------------------------------------|-----------------|------------------|------|" << endl;
                TampilkanInfoBuku(buku);
                bukuDipilih.push(buku);
                buku.stok--;
                bukuDitemukan = true;
                cout << "|==========================================================================================|" << endl;

                break;
            }
            else
            {
                cout << "Maaf, buku ini sudah habis!" << endl;
                bukuDitemukan = true;
                break;
            }
        }
    }

    if (!bukuDitemukan)
    {
        cout << "Buku dengan ID tersebut tidak ditemukan!" << endl;
    }
}
// menambahkan buku
void TambahBuku(vector<Buku> &daftarBuku)
{
    Buku bukuBaru;
    cout << "Masukkan judul buku: ";
    cin.ignore();
    getline(cin, bukuBaru.judul);
    cout << "Masukkan jenis buku: ";
    getline(cin, bukuBaru.jenis);
    cout << "Masukkan harga buku: ";
    cin >> bukuBaru.harga;
    cout << "Masukkan stok buku: ";
    cin >> bukuBaru.stok;

    // Menghitung ID baru dengan cara menambahkan 1 dari ID buku terakhir
    if (daftarBuku.empty())
    {
        bukuBaru.id = 1;
    }
    else
    {
        bukuBaru.id = daftarBuku.back().id + 1;
    }

    // Menambahkan buku baru ke dalam daftar buku
    daftarBuku.push_back(bukuBaru);
    cout << "Buku berhasil ditambahkan!" << endl;
    
}

// unutuk merubah atau mengupdate sebuah buku pada daftar buku
void EditBuku(vector<Buku> &daftarBuku)
{
    cout << "|==========================================================================================|" << endl;
    cout << "|                                      Daftar Buku                                         |" << endl;
    cout << "|==========================================================================================|" << endl;
    cout << "| ID     | Nama Buku                           | Jenis           | Harga            | Stok |" << endl;
    cout << "|--------|-------------------------------------|-----------------|------------------|------|" << endl;
    for (const Buku &buku : daftarBuku)
    {
        TampilkanInfoBuku(buku);
    }
    cout << "|==========================================================================================|" << endl;

    int idEdit;
    cout << "Masukkan ID buku yang akan diedit: ";
    cin >> idEdit;

    bool found = false;
    for (Buku &buku : daftarBuku)
    {
        if (buku.id == idEdit)
        {
            cout << "Masukkan judul baru: ";
            cin.ignore();
            getline(cin, buku.judul);
            cout << "Masukkan jenis baru: ";
            getline(cin, buku.jenis);
            cout << "Masukkan harga baru: ";
            cin >> buku.harga;
            cout << "Masukkan stok baru: ";
            cin >> buku.stok;
            found = true;
            cout << "Buku berhasil diubah!" << endl;
            break;
        }
    }

    if (!found)
    {
        cout << "Buku tidak ditemukan!" << endl;
    }
}
// fungsi untuk mencari buku
int CariBuku(const vector<Buku> &daftarBuku, int idBuku)
{
    for (int i = 0; i < daftarBuku.size(); ++i)
    {
        if (daftarBuku[i].id == idBuku)
        {
            return i; // Mengembalikan indeks buku jika ditemukan
        }
    }
    return -1; // Mengembalikan -1 jika buku tidak ditemukan
}

// membayar buku yang telah di pilih
void BayarBuku(stack<Buku> &bukuDipilih)
{
    if (bukuDipilih.empty())
    {
        cout << "Silakan pilih buku terlebih dahulu sebelum melakukan pembayaran!" << endl;
        return;
    }

    double totalHarga = 0.0;
    stack<Buku> tempStack;

    while (!bukuDipilih.empty())
    {
        totalHarga += bukuDipilih.top().harga;
        tempStack.push(bukuDipilih.top());
        bukuDipilih.pop();
    }

    cout << "Total harga buku yang dipilih: " << totalHarga << endl;

    double uang;
    cout << "Masukkan jumlah uang: ";
    cin >> uang;

    if (uang == totalHarga)
    {
        cout << "Pembayaran berhasil, uang pas!" << endl;
    }
    else if (uang > totalHarga)
    {
        double kembalian = uang - totalHarga;
        cout << "Pembayaran berhasil, kembalian: " << kembalian << endl;
    }
    else
    {
        cout << "Pembayaran gagal, uang kurang!" << endl;

        while (!tempStack.empty())
        {
            bukuDipilih.push(tempStack.top());
            tempStack.pop();
        }

        return;
    }

    while (!tempStack.empty())
    {
        tempStack.pop();
    }
}
// fungsi untuk mencari buku berdasarkan id buku
void CariBukuByID(const vector<Buku> &daftarBuku)
{
    int idCari;
    cout << "Masukkan ID buku yang ingin dicari: ";
    cin >> idCari;

    int idx = CariBuku(daftarBuku, idCari);
    if (idx != -1)
    {
        cout << "|==========================================================================================|" << endl;
        cout << "|                                      Daftar Buku                                         |" << endl;
        cout << "|==========================================================================================|" << endl;
        cout << "| ID     | Nama Buku                           | Jenis           | Harga            | Stok |" << endl;
        cout << "|--------|-------------------------------------|-----------------|------------------|------|" << endl;
        TampilkanInfoBuku(daftarBuku[idx]);
        cout << "|==========================================================================================|" << endl;
    }
    else
    {
        cout << "Buku dengan ID tersebut tidak ditemukan!" << endl;
    }
}

// menampilkan list dari buku yang telah disediakan dari toko buku
void ListBuku(vector<Buku> &daftarBuku)
{
    daftarBuku = {
        {1, "Harry Potter and the Sorcerer's ", "Fantasi", 100000, 5},
        {2, "To Kill a Mockingbird", "Fiksi Sejarah", 150000, 7},
        {3, "The Great Gatsby", "Fiksi", 200000, 2},
        {4, "1984 ", "Fiksi Ilmiah", 250000, 4},
        {5, "The Catcher in the Rye ", "Fiksi ", 230000, 3},
        {6, "The Lord of the Rings ", "Fantasi ", 310000, 6},
        {7, "Pride and Prejudice ", "Romantis ", 150000, 3},
        {8, "The Hobbit ", "Petualangan ", 120000, 8},
        {9, "Laskar Pelangi", "Fiksi Ilmiah ", 190000, 4},
        {10, "The Hunger Games ", "Fiksi  ", 130000, 8},
    };
}
// fungsi utama program
int main()
{
    vector<Buku> daftarBuku;
    stack<Buku> bukuDipilih;
    ListBuku(daftarBuku);
    int menu;
    do
    {
        TampilkanMenu();
        cin >> menu;

        switch (menu)
        {
        case 1:
            TampilkanDaftarBuku(daftarBuku);
            break;
        case 2:
            PilihBuku(daftarBuku, bukuDipilih);
            break;
        case 3:
            EditBuku(daftarBuku);
            break;
        case 4:
            BayarBuku(bukuDipilih);
            break;
        case 5:
            CariBukuByID(daftarBuku);
            break;
        case 6:
            TambahBuku(daftarBuku);
            break;
        case 7:
            cout << "Terima kasih telah menggunakan program ini!" << endl;

            break;
        default:
            cout << "Menu tidak valid!" << endl;
        }

    } while (menu != 7);

    return 0;
}
