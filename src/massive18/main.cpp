#include <iostream>
#include <iomanip>
using namespace std; // сдвиг элементов массива
int main() {
    int i, n = 10, j;
    int a[n];
    for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    j = a[0];
        for (i = 0; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }
        a[n - 1] = j;
        for (i = 0; i < n; i++)
            {
                cout << a[i] << setw(3);
            }
}
