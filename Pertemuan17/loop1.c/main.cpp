#include <iostream>

using namespace std;

int main()
{
    /* no.1
     Program untuk mencetak angka integer dari 100 hingga 1 dan sebaliknya
     menggunakan satu loop for multi expression di dalamnya*/

    int j = 1;
    for(int i = 100; i >= 1; i--) {
        cout << "i=" << i << " dan " << "j=" << j << endl;
        j++;
    }
    return 0;
}
