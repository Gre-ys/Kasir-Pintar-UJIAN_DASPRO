/*
    Kelompok 6
    Kelas               : 1A RPL
    Anggota Kelompok    :
                            1. Dhafin Rizqullah Hadiputro (2000053)
                            2. Irham Nur Alim (2001711)
                            3. Raden Surya Menggala Putra (2003018)
                            4. Rangga Kalam Sidiq (2008752)
    Nama Aplikasi       : Kasir Pintar
*/

#include "Lib_Transaksi.h"
#include "Lib_DaftarMenu.h"

main()
{
    if (nama_pembeli == "NULL")
    {
        pembeli();
    }

    system("cls");

    while (pilihan != 2)
    {
    Label_PilihTindakan:
        mesin();

        cout << "\nPilihan Tindakan:"
             << endl;
        cout << "1. Lihat Daftar Menu" << endl;
        cout << "2. Transaksi atau Pemesanan Menu" << endl;
        pilihan = validate_int("\nSilahkan pilih: ", pilihan, "Pilihan tidak valid!");

        switch (pilihan)
        {
        case 1:
            system("cls");
            baru::Daftar_Menu();
            break;
        case 2:
            system("cls");
            Transaksi();
            break;
        default:
            system("cls");
            cout << "Tolong masukkan pilihan yang tertera (1/2)!" << endl;
            goto Label_PilihTindakan;
            break;
        }

        system("cls");
    }
}
