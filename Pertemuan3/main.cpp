#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    printf("Data Diri\n"); /*penggunan printf*/
    string n="Restu Aditya Setyawan";
    float t= 169.9;
    string a="Batang";
    int volume,panjang,lebar,tinggi;


    cout << "\nNama         :" << n;
    cout << "\nTinggi Badan :" << t;
    cout << "\nAlamat       :" << a;


    /*penggunaan scanf*/

   printf("\n\nPerhitungan Volume Balok");
   printf("\n(untuk perhitungan bilangan bulat )");

   printf("\npanjang       :");
   scanf("%d",&panjang);

   printf("\nlebar         :");
   scanf("%d",&lebar);

   printf("\ntinggi        :");
   scanf("%d",&tinggi);

   volume=panjang*lebar*tinggi;

   printf("\nJadi Volume Balok Tersebut Adalah=%d",volume);

    return 0;
}
