#include <iostream>

using namespace std;

    void shelSort(int arr[], int n){
        for (int a=n/2; a>0; a= a/2){
            for (int b=a; b<n; b++){

                for (int c=b-a; c>=0; c-=a){
                    if (arr[c+a] > arr[c]){

                        int temp = arr[c+a];
                        arr[c+a] = arr[c];
                        arr[c] = temp;
                    }
                }
            }
        }
    }

    void printArray(int arr[], int n) {
        for (int i = 0; i < n; ++i) {
            cout << arr[i] << " ";
        }
        cout << std::endl;
    }

int main()
{
    int n;
    cout << "Masukkan Jumlah Array: ";
    cin >> n;

    int arr[n];
    for (int i=0; i<n; i++){
        cout << "Masukkan Nilai Array ke-" << i+1 << " : ";
        cin >> arr[i];
    }
    cout << endl;
    //Array sementara
    cout << "Array : ";
    for (int a=0; a<n; a++){
        cout << arr[a] << " ";
    }
    cout<<endl;
    shelSort(arr,n);
    cout << "Array : ";
    printArray(arr,n);

    return 0;
}
