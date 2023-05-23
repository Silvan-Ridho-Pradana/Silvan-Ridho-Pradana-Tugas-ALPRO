#include <iostream>

using namespace std;

    bool isganjil(int n) {
        return n % 2 != 0;
    }

    void AngkaTerkecil(int arr[], int uk) {
        int kecil = INT_MAX;
        int index = -1;

        for (int i=0; i<uk; i++) {
            if (arr[i] % 2 == 0 && arr[i] < kecil) {
                kecil = arr[i];
                index = i;
            }
        }

        if (index != -1) {
            cout << "Angka Genap Terkecilnya Adalah: " << kecil <<endl;
            cout << "Index ke- : " << index <<endl;
        } else {
            cout << "Tidak ada angka genap di bilangan ini." <<endl;
        }
    }

int main() {
    int arr[] = {6, 7, 4, 3, 2};
    int uk = sizeof(arr) / sizeof(arr[0]);
    AngkaTerkecil(arr,uk);

    return 0;
}
