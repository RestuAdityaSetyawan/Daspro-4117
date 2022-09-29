#include <iostream>

using namespace std;

int main()
{
    int jurusan;

    cout << "\t==jurusan==\n" << endl;
    cout << "1. Teknik Informatika" << endl;
    cout << "2. Sistem Informasi" << endl;
    cout << "3. DKV" << endl;

    cout << "\nMasukan Jurusan Anda       :";
    cin >> jurusan;

    if (jurusan == 1) {
        cout << "\nJurusan Anda Adalah : Teknik Informatika" << endl;
    }
    else if (jurusan == 2) {
        cout << "\nJurusan Anda Adalah : Sistem Informasi" << endl;
    }
    else if (jurusan == 3) {
        cout << "\nJurusan Anda Adalah : DKV" << endl;
    }
    else {
        cout << "\nJurusan Tidak Diketahui" << endl;
    }

    return 0;
}
