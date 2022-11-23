#include <iostream>

using namespace std;

int main()
{
    /*no.2
    Program untuk mencetak angka integer dari 100 hingga 1,
    tetapi yang genap saja menggunakan statement continue*/

    for(int i = 100; i >= 1; i--) {
        if(i % 2 == 1) {
            continue;
        }
        cout << "Nilai Genap Adalah " << i << endl;
    }
    return 0;
}
