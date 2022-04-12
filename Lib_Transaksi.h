#pragma once
#include "Lib_Variable.h"
#include "Lib_Komentar.h"

void pembeli();
void mesin();
void metode_pembayaran();
void tunai();
void kartu();
void vpay();
void menu();
void pilih_menu();
void komentar();

void Transaksi()
{

    system("cls");
    mesin();
    cout << "\n";
    metode_pembayaran();
    cout << endl;

    system("cls");
    cout << "Saldo yang dimiliki: " << total_saldo << "\n"
         << endl;
    menu();
    pilih_menu();

    cin.get();
}

void pembeli()
{
    system("cls");
    cout << "Masukkan nama Anda: ";
    getline(cin, nama_pembeli);
}

void mesin()
{
    cout << "=====================================" << endl;
    cout << "|                                   |" << endl;
    cout << "|      SELAMAT DATANG DI TABLE      |" << endl;
    cout << "|             NOMOR " << no_mesin << "               |" << endl;
    cout << "|                                   |" << endl;
    cout << "| ID: " << id_mesin << "                         |" << endl;
    cout << "=====================================" << endl;
    cout << "Nama   : " << nama_pembeli << endl;
    cout << "Saldo  : " << total_saldo << endl;
}

void metode_pembayaran()
{
    char pilih_metode;

pilih_metode:
    cout << "Metode pengisisan saldo:\n " << endl;
    cout << "A. Uang tunai" << endl;
    cout << "B. Kartu debit" << endl;
    cout << "C. Virtual payment\n"
         << endl;
    cout << "Pilih metode pengisisan saldo: ";
    cin >> pilih_metode;

    switch (toupper(pilih_metode))
    {
    case 'A':
        system("cls");
        tunai();
        break;
    case 'B':
        system("cls");
        kartu();
        break;
    case 'C':
        system("cls");
        vpay();
        break;
    default:
        system("cls");
        cout << "Tolong pilih metode pembayaran yang tertera!" << endl;
        goto pilih_metode;
    }
}

void tunai()
{
    saldo = validate_int("Masukkan jumlah saldo yang akan diisi: ", saldo, "Jumlah saldo tidak valid!");
    cout << endl;
    cout << "Masukkan uang tunai ke sini..." << endl;
    cout << "|====================================|" << endl;
    cout << "|                                    |" << endl;
    cout << "|                                    |" << endl;
    cout << "|                                    |" << endl;
    cout << "|                                    |" << endl;
    cout << "|                                    |" << endl;
    cout << "|                                    |" << endl;
    cout << "|====================================|" << endl;
    cout << endl;
    cout << "Tekan enter untuk memasukkan uang ke dalam mesin.";
    total_saldo = total_saldo + saldo;
    getche();
}

void kartu()
{
    char jawab;

    cout << "Bank yang tersedia untuk pembayaran kartu debit: " << endl;
    cout << "BCA | BNI | BJB | BTN | Mandiri" << endl;
    cout << "---------------------------" << endl;
    cout << "Jika kartu debit anda tidak sesuai, mohon pilih metode pembayaran yang lain..." << endl;

penyesuaian:
    cout << "Apakah sesuai (y/n)? ";
    cin >> jawab;
    switch (toupper(jawab))
    {
    case 'Y':
        system("cls");
        goto lanjut;
        break;
    case 'N':
        system("cls");
        Transaksi();
        break;
    default:
        cout << "Tolong pilih (y/n)! " << endl;
        goto penyesuaian;
    }

lanjut:
    saldo = validate_int("Masukkan jumlah saldo yang akan diisi: ", saldo, "Jumlah saldo tidak valid!");
    cout << endl;
    cout << "Gesek kartu di sini..." << endl;
    cout << "|====================================|" << endl;
    cout << "|                                    |" << endl;
    cout << "|====================================|" << endl;
    cout << endl;
    cout << "Tekan enter untuk mengkonfirmasi.";
    total_saldo = total_saldo + saldo;
    getche();
}

void vpay()
{
    char jawab;

    cout << "Aplikasi yang tersedia untuk virtual payment: " << endl;
    cout << "OVO | Dana | GoPay" << endl;
    cout << "---------------------------" << endl;
    cout << "Jika virtual payment yang anda gunakan tidak sesuai, mohon pilih metode pembayaran yang lain..." << endl;

penyesuaian:
    cout << "Apakah sesuai (y/n)? ";
    cin >> jawab;
    switch (toupper(jawab))
    {
    case 'Y':
        system("cls");
        goto lanjut;
        break;
    case 'N':
        system("cls");
        Transaksi();
        break;
    default:
        cout << "Tolong pilih (y/n)! " << endl;
        goto penyesuaian;
    }

lanjut:
    saldo = validate_int("Masukkan jumlah saldo yang akan diisi: ", saldo, "Jumlah saldo tidak valid!");
    cout << endl;
    cout << "Scan barcode di bawah ini..." << endl;
    cout << "|==============|" << endl;
    cout << "|  []=====[]   |" << endl;
    cout << "|  | ----- |   |" << endl;
    cout << "|  | ----- |   |" << endl;
    cout << "|  []=====[]   |" << endl;
    cout << "|==============|" << endl;
    cout << endl;
    cout << "Tekan enter untuk mengkonfirmasi.";
    total_saldo = total_saldo + saldo;
    getche();
}

void menu()
{
    char jawab;

    if (total_saldo >= 2000 && total_saldo <= 2000)
    {
        cout << "H. Keripik kentang.......Rp2000,00" << endl;
        cout << "I. Keripik singkong......Rp2000,00" << endl;
    }
    else if (total_saldo >= 2000 && total_saldo <= 3000)
    {
        cout << "A. Es teh................Rp3000,00" << endl;
        cout << "H. Keripik kentang.......Rp2000,00" << endl;
        cout << "I. Keripik singkong......Rp2000,00" << endl;
    }
    else if (total_saldo >= 2000 && total_saldo <= 4000)
    {
        cout << "A. Es teh................Rp3000,00" << endl;
        cout << "E. Es jeruk..............Rp4000,00" << endl;
        cout << "H. Keripik kentang.......Rp2000,00" << endl;
        cout << "I. Keripik singkong......Rp2000,00" << endl;
    }
    else if (total_saldo >= 2000 && total_saldo <= 5000)
    {
        cout << "A. Es teh................Rp3000,00" << endl;
        cout << "B. Batagor...............Rp5000,00" << endl;
        cout << "C. Siomay................Rp5000,00" << endl;
        cout << "E. Es jeruk..............Rp4000,00" << endl;
        cout << "F. Cilok kuah............Rp5000,00" << endl;
        cout << "H. Keripik kentang.......Rp2000,00" << endl;
        cout << "I. Keripik singkong......Rp2000,00" << endl;
    }
    else if (total_saldo >= 2000 && total_saldo <= 6000)
    {
        cout << "A. Es teh................Rp3000,00" << endl;
        cout << "B. Batagor...............Rp5000,00" << endl;
        cout << "C. Siomay................Rp5000,00" << endl;
        cout << "D. Pempek................Rp6000,00" << endl;
        cout << "E. Es jeruk..............Rp4000,00" << endl;
        cout << "F. Cilok kuah............Rp5000,00" << endl;
        cout << "G. Cilok bumbu kacang....Rp6000,00" << endl;
        cout << "H. Keripik kentang.......Rp2000,00" << endl;
        cout << "I. Keripik singkong......Rp2000,00" << endl;
    }
    else if (total_saldo >= 2000 && total_saldo <= 10000)
    {
        cout << "A. Es teh................Rp3000,00" << endl;
        cout << "B. Batagor...............Rp5000,00" << endl;
        cout << "C. Siomay................Rp5000,00" << endl;
        cout << "D. Pempek................Rp6000,00" << endl;
        cout << "E. Es jeruk..............Rp4000,00" << endl;
        cout << "F. Cilok kuah............Rp5000,00" << endl;
        cout << "G. Cilok bumbu kacang....Rp6000,00" << endl;
        cout << "H. Keripik kentang.......Rp2000,00" << endl;
        cout << "I. Keripik singkong......Rp2000,00" << endl;
        cout << "K. Mie Ayam..............Rp10000,00" << endl;
        cout << "P. Jus Mangga............Rp10000,00" << endl;
        cout << "Q. Jus Jambu.............Rp10000,00" << endl;
    }
    else if (total_saldo >= 2000 && total_saldo <= 12000)
    {
        cout << "A. Es teh................Rp3000,00" << endl;
        cout << "B. Batagor...............Rp5000,00" << endl;
        cout << "C. Siomay................Rp5000,00" << endl;
        cout << "D. Pempek................Rp6000,00" << endl;
        cout << "E. Es jeruk..............Rp4000,00" << endl;
        cout << "F. Cilok kuah............Rp5000,00" << endl;
        cout << "G. Cilok bumbu kacang....Rp6000,00" << endl;
        cout << "H. Keripik kentang.......Rp2000,00" << endl;
        cout << "I. Keripik singkong......Rp2000,00" << endl;
        cout << "J. Bakso.................Rp12000,00" << endl;
        cout << "K. Mie Ayam..............Rp10000,00" << endl;
        cout << "P. Jus Mangga............Rp10000,00" << endl;
        cout << "Q. Jus Jambu.............Rp10000,00" << endl;
    }
    else if (total_saldo >= 2000 && total_saldo <= 15000)
    {
        cout << "A. Es teh................Rp3000,00" << endl;
        cout << "B. Batagor...............Rp5000,00" << endl;
        cout << "C. Siomay................Rp5000,00" << endl;
        cout << "D. Pempek................Rp6000,00" << endl;
        cout << "E. Es jeruk..............Rp4000,00" << endl;
        cout << "F. Cilok kuah............Rp5000,00" << endl;
        cout << "G. Cilok bumbu kacang....Rp6000,00" << endl;
        cout << "H. Keripik kentang.......Rp2000,00" << endl;
        cout << "I. Keripik singkong......Rp2000,00" << endl;
        cout << "J. Bakso.................Rp12000,00" << endl;
        cout << "K. Mie Ayam..............Rp10000,00" << endl;
        cout << "L. Ayam Geprek...........Rp15000,00" << endl;
        cout << "P. Jus Mangga............Rp10000,00" << endl;
        cout << "Q. Jus Jambu.............Rp10000,00" << endl;
    }
    else if (total_saldo >= 2000 && total_saldo <= 20000)
    {
        cout << "A. Es teh................Rp3000,00" << endl;
        cout << "B. Batagor...............Rp5000,00" << endl;
        cout << "C. Siomay................Rp5000,00" << endl;
        cout << "D. Pempek................Rp6000,00" << endl;
        cout << "E. Es jeruk..............Rp4000,00" << endl;
        cout << "F. Cilok kuah............Rp5000,00" << endl;
        cout << "G. Cilok bumbu kacang....Rp6000,00" << endl;
        cout << "H. Keripik kentang.......Rp2000,00" << endl;
        cout << "I. Keripik singkong......Rp2000,00" << endl;
        cout << "J. Bakso.................Rp12000,00" << endl;
        cout << "K. Mie Ayam..............Rp10000,00" << endl;
        cout << "L. Ayam Geprek...........Rp15000,00" << endl;
        cout << "M. Chicken Steak.........Rp20000,00" << endl;
        cout << "P. Jus Mangga............Rp10000,00" << endl;
        cout << "Q. Jus Jambu.............Rp10000,00" << endl;
    }
    else if (total_saldo >= 2000 && total_saldo <= 25000)
    {
        cout << "A. Es teh................Rp3000,00" << endl;
        cout << "B. Batagor...............Rp5000,00" << endl;
        cout << "C. Siomay................Rp5000,00" << endl;
        cout << "D. Pempek................Rp6000,00" << endl;
        cout << "E. Es jeruk..............Rp4000,00" << endl;
        cout << "F. Cilok kuah............Rp5000,00" << endl;
        cout << "G. Cilok bumbu kacang....Rp6000,00" << endl;
        cout << "H. Keripik kentang.......Rp2000,00" << endl;
        cout << "I. Keripik singkong......Rp2000,00" << endl;
        cout << "J. Bakso.................Rp12000,00" << endl;
        cout << "K. Mie Ayam..............Rp10000,00" << endl;
        cout << "L. Ayam Geprek...........Rp15000,00" << endl;
        cout << "M. Chicken Steak.........Rp20000,00" << endl;
        cout << "N. Sirloin Steak.........Rp25000,00" << endl;
        cout << "P. Jus Mangga............Rp10000,00" << endl;
        cout << "Q. Jus Jambu.............Rp10000,00" << endl;
    }
    else if (total_saldo >= 2000 && total_saldo <= 120000)
    {
        cout << "A. Es teh................Rp3000,00" << endl;
        cout << "B. Batagor...............Rp5000,00" << endl;
        cout << "C. Siomay................Rp5000,00" << endl;
        cout << "D. Pempek................Rp6000,00" << endl;
        cout << "E. Es jeruk..............Rp4000,00" << endl;
        cout << "F. Cilok kuah............Rp5000,00" << endl;
        cout << "G. Cilok bumbu kacang....Rp6000,00" << endl;
        cout << "H. Keripik kentang.......Rp2000,00" << endl;
        cout << "I. Keripik singkong......Rp2000,00" << endl;
        cout << "J. Bakso.................Rp12000,00" << endl;
        cout << "K. Mie Ayam..............Rp10000,00" << endl;
        cout << "L. Ayam Geprek...........Rp15000,00" << endl;
        cout << "M. Chicken Steak.........Rp20000,00" << endl;
        cout << "N. Sirloin Steak.........Rp25000,00" << endl;
        cout << "P. Jus Mangga............Rp10000,00" << endl;
        cout << "Q. Jus Jambu.............Rp10000,00" << endl;
        cout << "R. Mix Seafood...........Rp120000,00" << endl;
    }
    else if (total_saldo >= 2000 && total_saldo <= 220000)
    {
        cout << "A. Es teh................Rp3000,00" << endl;
        cout << "B. Batagor...............Rp5000,00" << endl;
        cout << "C. Siomay................Rp5000,00" << endl;
        cout << "D. Pempek................Rp6000,00" << endl;
        cout << "E. Es jeruk..............Rp4000,00" << endl;
        cout << "F. Cilok kuah............Rp5000,00" << endl;
        cout << "G. Cilok bumbu kacang....Rp6000,00" << endl;
        cout << "H. Keripik kentang.......Rp2000,00" << endl;
        cout << "I. Keripik singkong......Rp2000,00" << endl;
        cout << "J. Bakso.................Rp12000,00" << endl;
        cout << "K. Mie Ayam..............Rp10000,00" << endl;
        cout << "L. Ayam Geprek...........Rp15000,00" << endl;
        cout << "M. Chicken Steak.........Rp20000,00" << endl;
        cout << "N. Sirloin Steak.........Rp25000,00" << endl;
        cout << "P. Jus Mangga............Rp10000,00" << endl;
        cout << "Q. Jus Jambu.............Rp10000,00" << endl;
        cout << "R. Mix Seafood...........Rp120000,00" << endl;
        cout << "T. Sup Kura-kura.........Rp220000,00" << endl;
    }
    else if (total_saldo >= 300000)
    {
        cout << "A. Es teh................Rp3000,00" << endl;
        cout << "B. Batagor...............Rp5000,00" << endl;
        cout << "C. Siomay................Rp5000,00" << endl;
        cout << "D. Pempek................Rp6000,00" << endl;
        cout << "E. Es jeruk..............Rp4000,00" << endl;
        cout << "F. Cilok kuah............Rp5000,00" << endl;
        cout << "G. Cilok bumbu kacang....Rp6000,00" << endl;
        cout << "H. Keripik kentang.......Rp2000,00" << endl;
        cout << "I. Keripik singkong......Rp2000,00" << endl;
        cout << "J. Bakso.................Rp12000,00" << endl;
        cout << "K. Mie Ayam..............Rp10000,00" << endl;
        cout << "L. Ayam Geprek...........Rp15000,00" << endl;
        cout << "M. Chicken Steak.........Rp20000,00" << endl;
        cout << "N. Sirloin Steak.........Rp25000,00" << endl;
        cout << "P. Jus Mangga............Rp10000,00" << endl;
        cout << "Q. Jus Jambu.............Rp10000,00" << endl;
        cout << "R. Mix Seafood...........Rp120000,00" << endl;
        cout << "S. Kalkun Panggang.......Rp300000,00" << endl;
        cout << "T. Sup Kura-kura.........Rp220000,00" << endl;
    }
    else
    {
        cout << "Saldo tidak mencukupi, tolong isi saldo Anda!" << endl;
    penyesuaian:
        cout << "Isi saldo (y/n)? ";
        cin >> jawab;
        switch (toupper(jawab))
        {
        case 'Y':
            system("cls");
            Transaksi();
            break;
        case 'N':
            cout << "\nTerimakasih telah menggunakan mesin ini." << endl;
            exit(0);
        default:
            cout << "Tolong pilih (y/n)! " << endl;
            goto penyesuaian;
        }
    }
}

void pilih_menu()
{
    char jawab, jawab2, jawab3;
    int jumlah;
    double harga;

pilihMenu:
    cout << "\nPilih menu makanan yang diinginkan | Ketik '0' untuk mengisi ulang saldo.\n"
         << endl;
    cout << "Jawaban: ";
    cin >> jawab;
    switch (toupper(jawab))
    {
    case 'A':
        nomor_pesanan = 1; //misalkan
        pilihan_menu = "Es teh";
        harga = 3000;
        jumlah = validate_int("Masukkan jumlah porsi yang akan dipesan: ", jumlah, "Jumlah porsi tidak valid!");
        jumlah_porsi = jumlah;
        harga_total = harga * jumlah;
        goto konfirmasi;
        break;
    case 'B':
        nomor_pesanan = 1; //misalkan
        pilihan_menu = "Batagor";
        harga = 5000;
        jumlah = validate_int("Masukkan jumlah porsi yang akan dipesan: ", jumlah, "Jumlah porsi tidak valid!");
        jumlah_porsi = jumlah;
        harga_total = harga * jumlah;
        goto konfirmasi;
        break;
    case 'C':
        nomor_pesanan = 1; //misalkan
        pilihan_menu = "Siomay";
        harga = 5000;
        jumlah = validate_int("Masukkan jumlah porsi yang akan dipesan: ", jumlah, "Jumlah porsi tidak valid!");
        jumlah_porsi = jumlah;
        harga_total = harga * jumlah;
        goto konfirmasi;
        break;
    case 'D':
        nomor_pesanan = 1; //misalkan
        pilihan_menu = "Pempek";
        harga = 6000;
        jumlah = validate_int("Masukkan jumlah porsi yang akan dipesan: ", jumlah, "Jumlah porsi tidak valid!");
        jumlah_porsi = jumlah;
        harga_total = harga * jumlah;
        goto konfirmasi;
        break;
    case 'E':
        nomor_pesanan = 1; //misalkan
        pilihan_menu = "Es jeruk";
        harga = 4000;
        jumlah = validate_int("Masukkan jumlah porsi yang akan dipesan: ", jumlah, "Jumlah porsi tidak valid!");
        jumlah_porsi = jumlah;
        harga_total = harga * jumlah;
        goto konfirmasi;
        break;
    case 'F':
        nomor_pesanan = 1; //misalkan
        pilihan_menu = "Cilok kuah";
        harga = 5000;
        jumlah = validate_int("Masukkan jumlah porsi yang akan dipesan: ", jumlah, "Jumlah porsi tidak valid!");
        jumlah_porsi = jumlah;
        harga_total = harga * jumlah;
        goto konfirmasi;
        break;
    case 'G':
        nomor_pesanan = 1; //misalkan
        pilihan_menu = "Cilok bumbu kacang";
        harga = 6000;
        jumlah = validate_int("Masukkan jumlah porsi yang akan dipesan: ", jumlah, "Jumlah porsi tidak valid!");
        jumlah_porsi = jumlah;
        harga_total = harga * jumlah;
        goto konfirmasi;
        break;
    case 'H':
        nomor_pesanan = 1; //misalkan
        pilihan_menu = "Keripik kentang";
        harga = 2000;
        jumlah = validate_int("Masukkan jumlah porsi yang akan dipesan: ", jumlah, "Jumlah porsi tidak valid!");
        jumlah_porsi = jumlah;
        harga_total = harga * jumlah;
        goto konfirmasi;
        break;
    case 'I':
        nomor_pesanan = 1; //misalkan
        pilihan_menu = "Keripik singkong";
        harga = 2000;
        jumlah = validate_int("Masukkan jumlah porsi yang akan dipesan: ", jumlah, "Jumlah porsi tidak valid!");
        jumlah_porsi = jumlah;
        harga_total = harga * jumlah;
        goto konfirmasi;
        break;
    case 'J':
        nomor_pesanan = 1; //misalkan
        pilihan_menu = "Bakso";
        harga = 12000;
        jumlah = validate_int("Masukkan jumlah porsi yang akan dipesan: ", jumlah, "Jumlah porsi tidak valid!");
        jumlah_porsi = jumlah;
        harga_total = harga * jumlah;
        goto konfirmasi;
        break;
    case 'K':
        nomor_pesanan = 1; //misalkan
        pilihan_menu = "Mie ayam";
        harga = 10000;
        jumlah = validate_int("Masukkan jumlah porsi yang akan dipesan: ", jumlah, "Jumlah porsi tidak valid!");
        jumlah_porsi = jumlah;
        harga_total = harga * jumlah;
        goto konfirmasi;
        break;
    case 'L':
        nomor_pesanan = 1; //misalkan
        pilihan_menu = "Ayam geprek";
        harga = 15000;
        jumlah = validate_int("Masukkan jumlah porsi yang akan dipesan: ", jumlah, "Jumlah porsi tidak valid!");
        jumlah_porsi = jumlah;
        harga_total = harga * jumlah;
        goto konfirmasi;
        break;
    case 'M':
        nomor_pesanan = 1; //misalkan
        pilihan_menu = "Chicken steak";
        harga = 20000;
        jumlah = validate_int("Masukkan jumlah porsi yang akan dipesan: ", jumlah, "Jumlah porsi tidak valid!");
        jumlah_porsi = jumlah;
        harga_total = harga * jumlah;
        goto konfirmasi;
        break;
    case 'O':
        nomor_pesanan = 1; //misalkan
        pilihan_menu = "Sirloin steak";
        harga = 25000;
        jumlah = validate_int("Masukkan jumlah porsi yang akan dipesan: ", jumlah, "Jumlah porsi tidak valid!");
        jumlah_porsi = jumlah;
        harga_total = harga * jumlah;
        goto konfirmasi;
        break;
    case 'P':
        nomor_pesanan = 1; //misalkan
        pilihan_menu = "Jus mangga";
        harga = 10000;
        jumlah = validate_int("Masukkan jumlah porsi yang akan dipesan: ", jumlah, "Jumlah porsi tidak valid!");
        jumlah_porsi = jumlah;
        harga_total = harga * jumlah;
        goto konfirmasi;
        break;
    case 'Q':
        nomor_pesanan = 1; //misalkan
        pilihan_menu = "Jus jambu";
        harga = 10000;
        jumlah = validate_int("Masukkan jumlah porsi yang akan dipesan: ", jumlah, "Jumlah porsi tidak valid!");
        jumlah_porsi = jumlah;
        harga_total = harga * jumlah;
        goto konfirmasi;
        break;
    case 'R':
        nomor_pesanan = 1; //misalkan
        pilihan_menu = "Mix seafood";
        harga = 120000;
        jumlah = validate_int("Masukkan jumlah porsi yang akan dipesan: ", jumlah, "Jumlah porsi tidak valid!");
        jumlah_porsi = jumlah;
        harga_total = harga * jumlah;
        goto konfirmasi;
        break;
    case 'S':
        nomor_pesanan = 1; //misalkan
        pilihan_menu = "Kalkun panggang";
        harga = 300000;
        jumlah = validate_int("Masukkan jumlah porsi yang akan dipesan: ", jumlah, "Jumlah porsi tidak valid!");
        jumlah_porsi = jumlah;
        harga_total = harga * jumlah;
        goto konfirmasi;
        break;
    case 'T':
        nomor_pesanan = 1; //misalkan
        pilihan_menu = "Sup kura-kura";
        harga = 220000;
        jumlah = validate_int("Masukkan jumlah porsi yang akan dipesan: ", jumlah, "Jumlah porsi tidak valid!");
        jumlah_porsi = jumlah;
        harga_total = harga * jumlah;
        goto konfirmasi;
        break;
    case '0':
        system("cls");
        Transaksi();
        break;
    default:
        cout << "Tolong pilih menu yang tertera! " << endl;
        goto pilihMenu;
    }

konfirmasi:
    system("cls");
    cout << "Konfirmasi pesanan." << endl;
    cout << "Menu yang dipilih  : " << pilihan_menu << endl;
    cout << "Jumlah porsi       : " << jumlah_porsi << endl;
    cout << "Harga total        : " << harga_total << endl;
    cout << "\nSaldo Anda         : " << total_saldo << endl;

    cout << "Apakah sesuai (y/n)? ";
    cin >> jawab2;
    switch (toupper(jawab2))
    {
    case 'Y':
        goto lanjut;
        break;
    case 'N':
        system("cls");
        cout << "Saldo yang dimiliki: " << total_saldo << "\n"
             << endl;
        menu();
        nomor_pesanan = 0; //misalkan
        pilihan_menu = "";
        harga = 0;
        jumlah = 0;
        jumlah_porsi = 0;
        harga_total = 0;
        goto pilihMenu;
        break;
    default:
        cout << "Tolong pilih (y/n)! " << endl;
        goto konfirmasi;
    }

lanjut:
    if (total_saldo >= harga_total)
    {
        total_saldo_before = total_saldo;
        total_saldo = total_saldo - harga_total;
        system("cls");
        goto buatBon;
        cout << "\nSisa saldo Anda: " << total_saldo << endl;
    }
    else
    {
        cout << "Maaf saldo Anda tidak cukup, silakan isi saldo Anda!" << endl;
        cout << "Tekan enter untuk melanjutkan.";
        getche();
        Transaksi();
    }

pesanLagi:
    jawab3 = validate_char("Pesan lagi (y/n)? ", jawab3, "Masukkan tidak valid!");
    switch (toupper(jawab3))
    {
    case 'Y':
        system("cls");
        goto terdapatSaldo;
        break;
    case 'N':
        system("cls");
        if (total_saldo != 0)
        {
            cout << "Pelanggan yang terhormat, terdapat saldo yang tersisa." << endl;
            cout << "Sisa saldo atau kembalian akan diberikan oleh pengantar makanan, dimohon untuk menunggu.\n"
                 << endl;
        };
        komentar();
        goto label_selesai;
        break;
    default:
        cout << "Tolong pilih (y/n)! " << endl;
        goto pesanLagi;
    }

terdapatSaldo:
    if (total_saldo >= 2000)
    {
        system("cls");
        cout << "Saldo yang dimiliki: " << total_saldo << "\n"
             << endl;
        menu();
        nomor_pesanan = 0; //misalkan
        pilihan_menu = "";
        harga = 0;
        jumlah = 0;
        jumlah_porsi = 0;
        harga_total = 0;
        goto pilihMenu;
    }
    else
    {
        Transaksi();
    }

buatBon:
    system("cls");
    cout << "=====================================" << endl;
    cout << "|                                   |" << endl;
    cout << "|         STRUK PEMBAYARAN          |" << endl;
    cout << "|         NOMOR TABLE: " << no_mesin << "            |" << endl;
    cout << "|                                   |" << endl;
    cout << "| ID: " << id_mesin << "                         |" << endl;
    cout << "=====================================" << endl;
    cout << "Nama Pembeli         : " << nama_pembeli << endl;
    cout << "Pilihan Menu         : " << pilihan_menu << endl;
    cout << "Total Pembayaran     : " << harga_total << endl;
    cout << "Saldo Masuk          : " << total_saldo_before << endl;
    cout << "Sisa Saldo           : " << total_saldo << endl;

    cout << "\nPesanan anda sedang diproses ke kitchen, tunggu sesaat.\n"
         << endl;
    goto pesanLagi;

label_selesai:
    cout << "Program selesai." << endl;
    exit(0);
}