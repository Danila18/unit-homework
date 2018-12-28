#include <iostream>
using namespace std;
int main() {
    int n, i, max, k = 1; // нахождение количества мамксимальных элементов массива5
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        max = a[0];
    for (i = 1; i < n; i++)
        {
            if (a[i] > max) {
                max = a[i];
                k = 1;
            }
            else if (a[i] == max) k += 1;
        }
        cout << k;
}