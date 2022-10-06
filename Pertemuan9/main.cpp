#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "Bilangan Kelipatan 5" << endl;

    do {
        if (x % 5 == 0) {
            cout << x << endl;
        }
        x++;
    }while (x <= 100);

    return 0;
}
