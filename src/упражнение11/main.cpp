#include <iostream>
using namespace std;
int main() {
    const int n = 3;
    int a[n];
    int i, j, k, imax, kmax;
    for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++)
            {
            k = 2;
            for (j = 2; j <= a[i] / 2; j++)
                    {
                        if (a[i] % j == 0) k += 1;
                    }
                    if (k > kmax) {
                        kmax = k;
                        imax = i;
                    }
            }
            cout << imax;
}
