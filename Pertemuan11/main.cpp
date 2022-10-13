#include <iostream>

using namespace std;

int main()
{
    int a;
    int b = 1;
    int c = 0;
    int x = 100;
    a = b + c;

    cout << "Deret fibonaci bilangan kurang dari 100" << endl;

    while ( a <= x){
        cout << a << endl;
        a = b + c;
        c = b;
        b = a;

    }
    return 0;
}
