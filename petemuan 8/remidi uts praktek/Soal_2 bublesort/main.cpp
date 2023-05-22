#include <iostream>

using namespace std;

    void bubbleSort (int arr[], int uk) {
        for(int i=0; i<uk-1; i++) {

            for(int j=0; j<uk-i-1; j++) {
                if (arr[j] < arr[j + 1]) {

                    int temp = arr[j];      // bertukar
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

int main() {
    int arr[] = {5, 4, 3, 2, 2, 1, 1};
    int uk = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr,uk);
    cout << "Hasil Bubble Sort:" << endl;
    for(int i=0; i<uk; i++) {
    cout << arr[i] << " ";
    }

    return 0;
}
