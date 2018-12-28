#include <iostream>
using namespace std;
int main() {
    int i, n, k = 1, max; // количества максимальных значений
    cin >> n;
    int arr[i];
    for (i = 0; i < n; i++) {
        cout << "arr[" << i << "]= ";
        cin >> arr[i];
        if (arr[i] == max) k += 1;
        else if (arr[i] > arr[i - 1]) {
            max = arr[i];
        k = 1;
    }
        }
        cout << k;
}
