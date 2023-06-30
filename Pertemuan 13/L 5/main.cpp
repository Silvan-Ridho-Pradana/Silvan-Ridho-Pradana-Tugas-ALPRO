#include <bits/stdc++.h>
using namespace std;

typedef struct Sepeda{
    string merk,type,harga;
    int tahun;
}spda;

int main()
{
    spda Sepeda={"0","0","0",0};
    spda *pSepeda;
    pSepeda = &Sepeda;

    pSepeda->merk = "Polygon";
    pSepeda->type = "Sepeda Gunung";
    pSepeda->tahun = 2013;
    pSepeda->harga = "2.000.000";

    cout << "Merk = " << pSepeda->merk << endl;
    cout << "Type = " << pSepeda->type << endl;
    cout << "Tahun = " << pSepeda->tahun << endl;
    cout << "Harga = " << pSepeda->harga << endl;

    return 0;
}
