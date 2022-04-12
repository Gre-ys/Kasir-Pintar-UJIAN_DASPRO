#pragma once

#include <iostream>
#include <conio.h>
#include <fstream>
#include <limits>
using namespace std;

// Lib_Transaksi
// int pilihan;
double saldo;
double total_saldo, total_saldo_before, harga_total = 0;
int id_mesin = 16675;
int no_mesin = 6;
int jumlah_porsi, nomor_pesanan;
string pilihan_menu;
string nama_pembeli = "NULL";

// Lib_DaftarMenu
string temp_nama, nama[] = {"Ayam geprek", "Bakso\t", "Batagor\t", "Cilok kacang", "Cilok kuah", "Chicken steak", "Es jeruk", "Es teh\t", "Jus jambu", "Jus mangga", "Kalkun panggang", "Keripik kentang", "Keripik sinkong", "Mie ayam", "Mix seafood", "Pempek\t", "Siomay\t", "Sirloin steak", "Sup kura-kura"};
float temp_harga, harga[] = {15000, 12000, 5000, 6000, 5000, 20000, 4000, 3000, 10000, 10000, 300000, 2000, 2000, 10000, 120000, 6000, 5000, 25000, 220000};
int temp_bintang, bintang[] = {3, 4, 5, 2, 4, 3, 2, 2, 4, 2, 5, 3, 3, 2, 5, 3, 2, 4, 5};
int ndata = sizeof(nama) / sizeof(nama[0]);
int pilihan;
enum option_Switchcase
{
    murah_mahal = 1,
    mahal_murah,
    bintang_rekomendasi,
    cari,
    keluar_penampilmenu
};

// Validasi Inputan
int validate_int(string text1, int num, string text2)
{
    cout << text1;
    cin >> num;
    while (!cin.good())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << text2 << endl;
        cout << text1;
        cin >> num;
    }
    return num;
}

char validate_char(string text1, char num, string text2)
{
    cout << text1;
    cin >> num;
    while (!cin.good())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << text2 << endl;
        cout << text1;
        cin >> num;
    }
    return num;
}