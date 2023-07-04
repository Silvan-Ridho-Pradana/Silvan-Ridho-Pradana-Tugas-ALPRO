#include <bits/stdc++.h>

using namespace std;

int binarySearch(int array[], int x, int l, int t) {
    if (t >= l) {
        int mid = l + (t - l) / 2;

    if (array[mid] == x)
        return mid;

    if (array[mid] > x)
        return binarySearch(array, x, l, mid - 1);

        return binarySearch(array, x, mid + 1, t);
    }

    return -1;
}

int main() {
    int arr1[] = {70, 60, 90, 30, 50, 20, 10};
    int key;
    cout <<"masukan nilai yang di cari : ";
    cin >> key;

    int n = sizeof(arr1) / sizeof(arr1[0]);
    auto start = chrono::steady_clock::now();
    int result = binarySearch(arr1, key, 0, n - 1);
    if (result == -1)
        cout << "Tidak ditemukan" << endl;
    else
        cout << "Elemen ditemukan di index " << result << endl;

    auto end = chrono::steady_clock::now();

    cout << "Elapsed time in microseconds: "<< chrono::duration_cast<chrono::microseconds>(end - start).count() << " µs" << endl;
    cout << "Elapsed time in milliseconds: " << chrono::duration_cast<chrono::milliseconds>(end - start).count() << " ms" << endl;

    int space = sizeof(arr1) + sizeof(n) + sizeof(start) + sizeof(end) + sizeof(key) + sizeof(result);
    cout << "Space complexity: " << space << " bytes" << endl;
    return 0;
}
