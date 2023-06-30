#include <bits/stdc++.h>

using namespace std;

struct Rumus {
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

 };

int main()
{
    Rumus All;
    int p,l,r,t;
    cout << "Ukuran Panjang : ";
    cin >> p;
    cout << "Ukuran Lebar : ";
    cin >> l;
    cout << "Ukuran Tinggi : ";
    cin >> t;
    cout << "Ukuran Jari Jari : ";
    cin >> r;


    cout << All.Luas_p_panjang(p,l) << endl;
    cout << All.Luas_lingkaran(r) << endl;
    cout << All.Volum_kerucut(r,t) << endl;
    cout << All.Volum_bola(r) << endl;
    return 0;
}
