#include <iostream>

using namespace std;

bool maxN(int a, int b){
    if(a > b){
        cout << a << " MAKSIMAL DARI " << a << " Dan " <<  b;
        return true;
    } else {
        cout << a << " BUKAN MAKSIMAL DARI " << a << " Dan " <<  b;
        return false;
    }
}

bool minN(int a, int b){
    if(a < b){
        cout << a << " MINIMAL DARI " << a << " Dan " <<  b;
        return true;
    } else {
        cout << a << " BUKAN MINIMAL DARI " << a << " Dan " <<  b;
        return false;
    }
}

bool isEven(int x){
    if(x % 2 == 0){
        cout << x << " BILANGAN GENAP ";
        return true;
    } else {
        cout << x << " BUKAN BILANGAN GENAP ";
        return false;
    }
}

bool isOdd(int x){
    if(x % 2 != 0){
        cout << x << " BILANGAN GANJIL ";
        return true;
    } else {
        cout << x << " BUKAN BILANGAN GANJIL ";
        return false;
    }
}

bool isFactor(int x, int y){
    if(x % y == 0){
        cout << y << " ADALAH FAKTOR DARI BILANGAN " << x;
        return true;
    } else {
        cout << y << " BUKAN FAKTOR DARI BILANGAN " << x;
        return false;
    }
}

void swapN(int x, int y){
    cout << "HASIL DARI X = " << x << " & Y = " << y << " ADALAH ";
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << "X = " << x << " & Y = " << y;
}

int maxArray(int A[], int b){
    int temp = A[0];
    for(int i=0; i<b; i++){
        if(A[i] > temp){
            temp = A[i];
        }
    }
    return temp;
}

int minArray(int A[], int b){
    int temp = A[0];
    for(int i=0; i<b; i++){
        if(A[i] < temp){
            temp = A[i];
        }
    }
    return temp;
}

bool isFound(int x, int A[]){
    int y;
    for(int i=0; i<y; i++){
        if(A[i] == x){
            return true;
        }
    }
    return false;
}

int main() {
  cout << endl << "          - MaxN -              " << endl;
    maxN(10,5);    cout << endl;

    cout << endl << "         - MinN -             " << endl;
        minN(4,8);
            cout << endl;

    cout << "            - isEven -              " << endl;
        isEven(8);
            cout << endl;

    cout << endl << "            - isOdd -          " << endl;
        isOdd(10);
            cout << endl;

    cout << endl << "            - isFactor -        " << endl;
        isFactor(4,8);
            cout << endl;

     cout << endl << "            - swapN -         " << endl;
    swapN(4,1);
    cout << endl;

     cout << endl << "           - Max Array & Min Array -      " << endl;
        int a;
        cout << "MASUKAN JUMLAH ARRAY : "; cin >> a;
        int A[a];
        for(int i=0; i<a; i++){
            cout << "MASUKAN ELEMEN KE - " << i+1 << " : ";
            cin >> A[i];
            }
        cout << endl << "NILAI MAKSIMAL ADALAH : " << maxArray(A,a) << endl;
        cout << "NILAI MINIMAL ADALAH : " << minArray(A,a) << endl;

    cout << endl << "            - isFound -         " << endl;
    cout << "INPUTKAN ANGKA YANG AKAN DICARI : ";
    int p;
    cin >> p;
    cout << "TRUE = 1 dan FALSE = 0 " << endl;
    cout << "APAKAH NILAI " << p << " ADA PADA ARRAY DIATAS? JAWABANYA : " << isFound(p,A) << endl;
    cout << endl;

}
