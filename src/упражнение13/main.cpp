#include <iostream>
using namespace std;
int main() {
    const int n = 10;
    int a[n];
    int i, j, m;
    for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        m = 0;
        for (i = 0; i < n; i++)
            {
                if ((a[i] > 0 && a[i] % 10 == 7) && (a[i] < m || m == 0))
                j = a[i];
            }
            cout << j;
}