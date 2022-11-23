#include <iostream>

using namespace std;

int main()
{
    /*no.3
    Program untuk mencetak angka integer dari 100 hingga 1 menggunakan loop for,
    dan akan berhenti (break) bila mencapai angka 55*/

    for(int i = 100; i >= 1; i--) {
        if( i == 54) {
            break;
        }
        cout << i << endl;
    }
    return 0;
}
