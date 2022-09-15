#include <iostream>

using namespace std;

int main()
{

    /*Fungsi dari cin digunakan untuk mengambil input data dari teks yang dituliskan.*/
    /*Di Dalam perintah Cin membutuhkan variabel untuk menyimpan data yang diinputkan.*/

    cout << "\t\tMasukan Data Diri Anda\n \n" << endl;
    /*\t untuk memberikan tab*/

    string nama, nim, alamat, ukuran;
    int umur;
    char kel;

    cout << "\tMasukan Nama           : ";
    getline (cin, nama);
    /*getline berfungsi untuk menambahkan spasi antar kata*/

    cout << "\tMasukan NIM            : ";
    cin >> nim;

    cout << "\tMasukan Umur           : ";
    cin >> umur;

    cout << "\tJenis Kelamin          : ";
    cin >> kel;

    cout << "\tUkuran Baju            : ";
    cin >> ukuran;

    cout << "\n";

    cout << "\tSelamat Datang " << nama << ", Ini Adalah Data Dirimu!!!" << endl;
    cout << "\tNIM Anda Adalah               :" << nim << endl;
    cout << "\tUsia Anda Sekarang            :" << umur << "tahun" << endl;
    cout << "\tJenis Kelamin Anda            :" << kel << endl;
    cout << "\tUkuran Baju Anda              :" << ukuran << endl;

    return 0;
}
