#include <bits/stdc++.h>

using namespace std;

void selectionSort(int arr[], int n, int in) {
    if(in == n - 1){
        return;
    }

int min_idx = in;
    for (int i = in + 1; i < n; i++) {

      if (arr[i] < arr[min_idx])
        min_idx = i;
    }

if(min_idx != in){
        int temp = arr[min_idx];
        arr[min_idx] = arr[in];
        arr[in] = temp;
    }

selectionSort(arr, n, in + 1);
}
void printArray(int arr[], int n)
{
    cout << "{";
    for (int i = 0; i < n; i++){
        cout << arr[i];
        if(i+1<n)
            cout << ", ";
    }
    cout << "}";
}
int main()
{
    auto start = chrono::steady_clock::now();
    int arr1[] = { 60, 20, 10, 50, 90 };
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Array sebelum diurutkan : ";
    printArray(arr1, n1);
    cout<<endl;
    selectionSort(arr1, n1, 0);
    cout << "Array setelah diurutkan : ";
    printArray(arr1, n1);
    cout<<endl;

    auto end = chrono::steady_clock::now();
    cout << "Elapsed time in microseconds: "<< chrono::duration_cast<chrono::microseconds>(end - start).count() << " �s" << endl;
    cout << "Elapsed time in milliseconds: " << chrono::duration_cast<chrono::milliseconds>(end - start).count() << " ms" << endl;
    int space = sizeof(arr1) + sizeof(n1) + sizeof(start) + sizeof(end);
    cout << "Space complexity: " << space << " bytes" << endl;
    return 0;
}
