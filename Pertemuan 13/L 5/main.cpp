#include <bits/stdc++.h>
using namespace std;

typedef struct motor{
    string merk,type,harga;
    int tahun;
}mtr;

int main()
{
    mtr motor={"0","0","0",0};
    mtr *pmotor;
    pmotor = &motor;

    pmotor->merk = "Yamaha";
    pmotor->type = "Motor Matic";
    pmotor->tahun = 2016;
    pmotor->harga = "16.000.000";

    cout << "Merk = " << pmotor->merk << endl;
    cout << "Type = " << pmotor->type << endl;
    cout << "Tahun = " << pmotor->tahun << endl;
    cout << "Harga = " << pmotor->harga << endl;

    return 0;
}
