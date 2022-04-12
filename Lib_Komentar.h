#include "Lib_Variable.h"

void komentar()
{
    //Variabel
    fstream xfile;
    string komentar;
    string menu_fav;
    int bintang_komentar;
    char lanjut, teks;

    cout << "\n\nSelamat menikmati dan jangan lupa untuk memberikan komentar." << endl;
    cout << "Komentar dari Anda sangat berarti bagi perubahan untuk kami, terima kasih.\n"
         << endl;

label_tanyakomentar:
    lanjut = validate_char("Komentar sekarang (y/n)? ", lanjut, "Masukkan tidak valid!");
    cin.ignore(1, '\n');

    if ((lanjut == 'Y') | (lanjut == 'y'))
    {
        system("cls");
        goto label_berkomentar;
    }
    else if ((lanjut == 'N') | (lanjut == 'n'))
    {
        system("cls");
        cout << "Baik, kami akan menunggu komentar dari Anda... " << endl;
        goto label_tanyakomentar;
    }
    else
    {
        system("cls");
        cout << "Tolong pilih (y/n)!" << endl;
        goto label_tanyakomentar;
    };

label_berkomentar:
    cout << "Bagaimana kesan Anda mengenai metode dari pelayanan kami di sini?" << endl;
    getline(cin, komentar);
    cout << "\nMenu apa yang Anda paling sukai di sini?" << endl;
    getline(cin, menu_fav);
    bintang_komentar = validate_int("\nAyo, beri rating/bintang untuk tempat kami (1-5): ", bintang_komentar, "Tolong masukkan dalam bentuk angka (1-5)");
    while (bintang_komentar < 1 || bintang_komentar > 5)
    {
        cout << "Tolong masukkan dari 1 sampai 5!" << endl;
        bintang_komentar = validate_int("\nAyo, beri rating/bintang untuk tempat kami (1-5): ", bintang_komentar, "Tolong masukkan dalam bentuk angka (1-5)");
    }

    xfile.open("komentar.txt", ios::app | ios::out);
    xfile << "Nama Pembeli/Pelanggan : " << nama_pembeli << endl;
    xfile << "Komentar               : " << komentar << endl;
    xfile << "Menu Favorit           : " << menu_fav << endl;
    xfile << "Bintang                : " << bintang_komentar << endl;
    xfile << "----------------------------------------------------------------\n"
          << endl;

    xfile.close();
    cout << endl;
    lanjut = validate_char("Terima kasih untuk feedback yang Anda berikan. Tertarik untuk melihat komentar dari pembeli/pelanggan lainnya (y/n)? ", lanjut, "Masukkan tidak valid!");

    if ((lanjut == 'Y') | (lanjut == 'y'))
    {
        system("cls");
        goto label_bacakomentar;
    }
    else if ((lanjut == 'N') | (lanjut == 'n'))
    {
        goto label_selesai;
        cout << "Terima kasih dan sampai jumpa!" << endl;
    }
    else
    {
        system("cls");
        cout << "Tolong pilih (y/n)! " << endl;
        goto label_tanyakomentar;
    };

label_bacakomentar:
    xfile.open("komentar.txt", ios::in | ios::out);
    while (!xfile.eof())
    {
        xfile.get(teks);
        cout << teks;
    }
    xfile.close();

    cout << "\nTekan 'Enter' jika Anda sudah selesai." << endl;
    getche();

label_selesai:
    cout << "\nTerima kasih dan sampai jumpa!" << endl;
}