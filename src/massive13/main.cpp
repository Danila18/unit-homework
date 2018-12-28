#include <iostream>
using namespace std;
int main() {
    int n, i, max1, max2, b; // нахождение двух максимальных элементов в массиве
    int a[n];
    cin >> n;
    for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        max1 = a[0];
        max2 = a[1];
        if (max2 > max1) {
            b = max1;
            max1 = a[1];
            max2 = b;
        }
        for (i = 2; i < n; i++)
            {
                if (a[i] > max1) {
                    max2 = max1;
                    max1 = a[i];
                }
                else if (a[i] > max2) max2 = a[i];
            }
            cout << max1 << " " << max2;
}