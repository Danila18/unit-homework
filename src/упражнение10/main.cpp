#include <iostream>
using namespace std;
int main() {
    int n = 10, i, max = 0, k = 0;
    int a[n];
    for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++)
            {
                if (a[i] < 0) {
                    k += 1;
                    if (k > max) max = k;
                }
                else k = 0;
            }
            cout << max;
}