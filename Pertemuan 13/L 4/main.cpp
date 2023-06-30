#include <bits/stdc++.h>
using namespace std;

typedef struct mahasiswa {
    char jenis[15],nama[10],plat[21];
    int tahun;
} mtr;


int main()
{
    //array statis
    mtr data[2];
    cout << "Array Statis" << endl;
    for(int i=0; i<2; i++){
        cout << "masukkan data baris ke-" << i+1 << endl;
        cin >> data[i].jenis >> data[i].nama >> data[i].plat >> data[i].tahun;
    }

    cout << "Jenis \t\t Nama \t NO Plat \t Tahun Keluaran" << endl;
    for(int i=0; i<2; i++){
        cout << data[i].jenis << "\t" << data[i].nama << "\t" << data[i].plat << "\t" << data[i].tahun << endl;
    }


    //array dinamis
    int n;
    cout << "Array Dinamis" << endl;
    cout << "Masukkan banyak element array :";
    cin >> n;
    mtr dataDin[n];
    for(int i=0; i<n; i++){
        cout << "masukkan data baris ke-" << i+1 << endl;
        cin >> dataDin[i].jenis >> dataDin[i].nama >> dataDin[i].plat >> dataDin[i].tahun;
    }

    cout << "Jenis \t\t Nama \t NO Plat \t Tahun Keluaran" << endl;
    for(int i=0; i<n; i++){
        cout << dataDin[i].jenis << "\t" << dataDin[i].nama << "\t" << dataDin[i].plat << "\t" << dataDin[i].tahun << endl;
    }
    return 0;
}
