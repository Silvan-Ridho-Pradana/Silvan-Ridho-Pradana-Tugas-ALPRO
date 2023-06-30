#include <bits/stdc++.h>

using namespace std;

typedef struct Rumus {
    public:
    int Luas_p_panjang (int pnjng,int lbar){
        return pnjng*lbar;
    }
    int Luas_lingkaran (int r){
        return (22 * r * r)/7;
    }
    float Volum_kerucut (int r,int t){
        return (1 * 3.14 * pow(r,2)*t)/3;
    }
    float Volum_bola (int r){
        return (4 * 3.14 * pow(r,3))/3;
    }
}hitung;

int main()
{
    hitung A11;
    int p,l,r,t;
    cout << "Ukuran Panjang : ";
    cin >> p;
    cout << "Ukuran Lebar : ";
    cin >> l;
    cout << "Ukuran Jari Jari : ";
    cin >> r;
    cout << "Ukuran Tinggi : ";
    cin >> t;

    cout << A11.Luas_p_panjang(p,l) << endl;
    cout << A11.Luas_lingkaran(r) << endl;
    cout << A11.Volum_kerucut(r,t) << endl;
    cout << A11.Volum_bola(r) << endl;

    return 0;
}
