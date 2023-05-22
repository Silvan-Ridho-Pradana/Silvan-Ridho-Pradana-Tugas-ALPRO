#include <iostream>
using namespace std;

    int jumlah(int x){
        if(x == 1){
            return 1;
        }else{
            return x+jumlah(x-1);
        }
    }
    int kurang(int x){
        if(x==1){
            return 1;
        }else{
            return x-kurang(x-1);
        }
    }
    int kali(int x){
        if(x==0){
            return 1;
        }else{
            return x*kali(x-1);
        }
    }
    int bagi(int x){
        if(x==0){
            return 1;
        }else{
            return x/bagi(x-1);
        }
    }
    int pangkat(int x, int y)
    {
       if(y == 0)
          return 1;
        else
          return x*pangkat(x,y-1);
    }
    int fibonanci(int x){
        if(x==1){
            return 1;
        }else if (x==0){
            return 0;
        }else{
            return fibonanci(x-1) + fibonanci(x-2);
        }
    }
    int faktorial(int x){
        if(x==0){
            return 1;
        }else{
            return x * faktorial(x-1);
        }
    }

int main()
{
    int n,i,j;
    cout<<"Masukkan Bilangan : "; cin>> n;
    cout<<"Penjumlahan : " << jumlah(n) <<endl;
    cout<<"Pengurangan : " << kurang(n) <<endl;
    cout<<"Perkalian : " << kali(n) <<endl;
    cout<<"Pembagian : " << bagi(n) <<endl;
    cout<<"Fibonanci : " << fibonanci(n) <<endl;

    for(int x=0; x<=n ;x++){
        cout << fibonanci(i) << " "; }
    cout<<endl<< "Faktorial : " << faktorial(n) <<endl;
    cout<< "Masukkan Bilangan : ";cin >> i;
    cout<< "Masukkan Pangkat : "; cin>> j;
    cout<< "Pangkat : " << pangkat(i,j) <<endl;

    return 0;
}
