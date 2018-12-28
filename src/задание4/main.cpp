#include <iostream>
using namespace std;
int main() {
    int i, n = 10, k = 1, kmax;
    int a[n];
    for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++)
            {
                if (a[i] % 2 == 0) {
                    if (a[i + 1] > a[i])
                        {
                            k += 1;
                            if (k > kmax) kmax = k;
                        }
                }
                else k = 1;
            }
            cout << kmax;
}