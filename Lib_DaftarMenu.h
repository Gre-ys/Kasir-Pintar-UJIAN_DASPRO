#include "Lib_Variable.h"

namespace baru
{
    struct pesan
    {
        string nama[19];
        float harga[19];
        int bintang[19];
    };
    pesan menu;

    void nilai_struct()
    {
        for (int i = 0; i < ndata; i++)
        {
            menu.nama[i] = nama[i];
            menu.harga[i] = harga[i];
            menu.bintang[i] = bintang[i];
        }
    }

    void print_bintang(int bintang)
    {
        if (bintang > 0)
        {
            if (bintang > 0)
            {
                cout << "*";
                print_bintang(bintang - 1);
            }
        }
    }

    void sort_harga()
    {
        for (int i = 0; i < ndata; i++)
        {
            for (int j = 0; j < ndata; j++)
            {
                if (menu.harga[j] < menu.harga[j + 1])
                {
                    temp_harga = menu.harga[j];
                    menu.harga[j] = menu.harga[j + 1];
                    menu.harga[j + 1] = temp_harga;

                    temp_bintang = menu.bintang[j];
                    menu.bintang[j] = menu.bintang[j + 1];
                    menu.bintang[j + 1] = temp_bintang;

                    temp_nama = menu.nama[j];
                    menu.nama[j] = menu.nama[j + 1];
                    menu.nama[j + 1] = temp_nama;
                }
            }
        }
    }

    void sort_bintang()
    {
        for (int i = 0; i < ndata; i++)
        {
            for (int j = 0; j < ndata; j++)
            {
                if (menu.bintang[j] < menu.bintang[j + 1])
                {
                    temp_harga = menu.harga[j];
                    menu.harga[j] = menu.harga[j + 1];
                    menu.harga[j + 1] = temp_harga;

                    temp_bintang = menu.bintang[j];
                    menu.bintang[j] = menu.bintang[j + 1];
                    menu.bintang[j + 1] = temp_bintang;

                    temp_nama = menu.nama[j];
                    menu.nama[j] = menu.nama[j + 1];
                    menu.nama[j + 1] = temp_nama;
                }
            }
        }
    }

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

    float validate_float(string text1, float num, string text2)
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

    void border_menu()
    {
        cout << "Nama\t\t\tHarga\t\t\tBintang" << endl;
        cout << "------------------------------------------------------------" << endl;
    }

    void print_menu_asal()
    {
        nilai_struct();

        for (int i = 0; i < ndata; i++)
        {
            cout << menu.nama[i] << "\t\tRp" << menu.harga[i] << ",00\t\t";
            print_bintang(menu.bintang[i]);
            cout << endl;
        }
    }

    void print_menu()
    {
        for (int i = 0; i < ndata; i++)
        {
            cout << menu.nama[i] << "\t\tRp" << menu.harga[i] << ",00\t\t";
            print_bintang(menu.bintang[i]);
            cout << endl;
        }
    }

    void menu_murahmahal()
    {
        cout << "=================== DAFTAR MENU MURAH-MAHAL ===================\n\n"
             << endl;

        border_menu();

        sort_harga();

        for (int i = ndata - 1; i >= 0; i--)
        {
            cout << menu.nama[i] << "\t\tRp" << menu.harga[i] << ",00\t\t";
            print_bintang(menu.bintang[i]);
            cout << endl;
        }
    }

    void menu_mahalmurah()
    {
        cout << "=================== DAFTAR MENU MAHAL-MURAH ===================\n\n"
             << endl;

        border_menu();

        sort_harga();

        print_menu();
    }

    void menu_bintangrekomendasi()
    {
        cout << "=================== DAFTAR MENU REKOMENDASI ===================\n\n"
             << endl;

        border_menu();

        sort_bintang();

        for (int i = ndata - 1; i >= 0; i--)
        {
            cout << menu.nama[i] << "\t\tRp" << menu.harga[i] << ",00\t\t";
            print_bintang(menu.bintang[i]);
            cout << endl;
        }
    }

    void cari_menu()
    {
        cout << endl;
        float dicari;
        int ditemukan = 0;

        dicari = validate_float("\nMasukkan harga maksimal menu yang ingin dicari: ", dicari, "Masukkan tidak valid!");
        cout << endl;

        cout << "Proses mencari..." << endl;
        border_menu();
        sort_harga();

        for (int i = 0; i < ndata; i++)
        {
            if (menu.harga[i] <= dicari)
            {
                cout << menu.nama[i] << "\t\tRp" << menu.harga[i] << ",00\t\t";
                print_bintang(menu.bintang[i]);
                cout << endl;
                ditemukan++;
            }
        }

        cout << "\nDaftar menu ";
        if (ditemukan == 0)
        {
            cout << "di rentang harga yang anda masukkan tidak ada, maaf." << endl;
        }
        else
        {
            cout << "di rentang harga yang ada masukkan ditemukan." << endl;
        };
    }

    void Daftar_Menu()
    {
        system("cls");
    label_pemilihanmetode:
        cout << "===================== DAFTAR MENU =====================" << endl;
        cout << "\n\n";

        border_menu();
        nilai_struct();
        print_menu_asal();
        cout << endl;

        cout << "---Mengurutkan atau Mencari---\n"
             << endl;
        cout << "1. Murah-Mahal" << endl;
        cout << "2. Mahal-Murah" << endl;
        cout << "3. Bintang Rekomendasi" << endl;
        cout << "4. Cari Menu" << endl;
        cout << "5. Keluar Penampil Menu" << endl;
        pilihan = validate_int("\nMasukkan pilihan (1-5): ", pilihan, "Pilihan tidak valid!");

        while (pilihan != keluar_penampilmenu)
        {
            switch (pilihan)
            {
            case murah_mahal:
                system("cls");
                menu_murahmahal();
                break;
            case mahal_murah:
                system("cls");
                menu_mahalmurah();
                break;
            case bintang_rekomendasi:
                system("cls");
                menu_bintangrekomendasi();
                break;
            case cari:
                system("cls");
                cari_menu();
                break;
            default:
                system("cls");
                cout << "Tolong pilih menu pilihan yang tertera!" << endl;
                // goto label_pemilihanmetode;
            }

            cout << "\nTekan 'Enter' untuk melanjutkan..." << endl;
            getche();
            system("cls");
            goto label_pemilihanmetode;
        }

        cin.get();
    }
} // namespace baru