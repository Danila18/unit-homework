#include <iostream>
using namespace std;
int main() {
    const int n = 10;
    int a[n];
    int i, j, x, y;
    for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        x = a[0];
    y = a[0];
        for (i = 1; i < n; i++)
            {
                if (a[i] > x) x = a[i];
                if (a[i] < y) y = a[i];
            }
            x = y - x;
        cout << x;
}