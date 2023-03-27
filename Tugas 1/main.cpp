#include <iostream>

using namespace std;
    //Array
    int total(int a[],int n){
        int sum=0;
        for (int x=0; x<n; x++){
            sum += a[x];
        }
        return sum;
    }

    float rata(int a[],int n){
        float sum=0;
        for (int x=0; x<n; x++){
            sum += a[x];
        }
        return sum/n;
    }

    int tambah(int a, int b){
    int c = a + b;
    return c;
}
//Aritmatika
int kurang(int a, int b){
    int c = a - b;
    return c;
}

int kali(int a, int b){
    int c = a * b;
    return c;
}

float bagi(float a, int b){
    float c = a / b;
    return c;
}


int main()
{
    cout<< "***************************************"<<endl;
    int n;
    cout <<endl<< "masukan ukuran array: "; cin >>n;
    int arr[n];
    cout << "masukan nilai array" << endl;
    for (int i=0; i<n; i++){
        cin >>arr[i];
    }
    cout << "hasilnya : " << endl;
    cout << "#TOTAL: "<< total(arr,n)<<endl;
    cout << "#RATA-RATA: "<< rata(arr,n)<<endl;

    cout<<endl<< "***************************************" <<endl;
    int a,b;
    cout <<endl<< "Masukan Angka-1: "; cin >> a;
    cout << "Masukan Angka-2: "; cin >> b;
    cout << "hasil dari semua: " << endl;

    cout << "#PERTAMBAHAN = "<< tambah(a,b) << endl;
    cout << "#PENGURANGAN = "<< kurang(a,b) << endl;
    cout << "#PERKALIAN   = "<< kali(a,b) << endl;
    cout << "#PEMBAGIAN   = "<< bagi(a,b) << endl;

    return 0;
}

